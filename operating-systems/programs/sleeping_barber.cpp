#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>

using namespace std;

int chairs = 3;
mutex mtx;
condition_variable cv_barber;
condition_variable cv_customer;

void barber() {
    while (true) {
        unique_lock<mutex> lock(mtx);
        cv_customer.wait(lock, [] { return chairs < 3; });
        cout << "Barber is cutting hair.\n";
        this_thread::sleep_for(chrono::milliseconds(500));
        chairs++;
        cv_barber.notify_one();
    }
}

void customer(int id) {
    unique_lock<mutex> lock(mtx);
    if (chairs > 0) {
        chairs--;
        cout << "Customer " << id << " waiting in chair (Free: " << chairs << ")\n";
        cv_customer.notify_one();
        cv_barber.wait(lock);
        cout << "Customer " << id << " got haircut.\n";
    } else {
        cout << "Customer " << id << " left (No chairs).\n";
    }
}

int main() {
    thread b(barber);
    thread consumers[5];
    for(int i=0; i<5; ++i) consumers[i] = thread(customer, i);
    for(int i=0; i<5; ++i) consumers[i].join();
    b.detach(); // Let barber spin forever
    return 0;
}
