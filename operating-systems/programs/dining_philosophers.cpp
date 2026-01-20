#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

mutex forks[5];

void philosopher(int id) {
    // Avoid deadlock by resource hierarchy: Always pick lower index first
    int left = min(id, (id + 1) % 5);
    int right = max(id, (id + 1) % 5);

    forks[left].lock();
    forks[right].lock();

    cout << "Philosopher " << id << " is eating.\n";
    this_thread::sleep_for(chrono::milliseconds(500));

    forks[left].unlock();
    forks[right].unlock();
    
    cout << "Philosopher " << id << " finished eating.\n";
}

int main() {
    thread t[5];
    for (int i = 0; i < 5; ++i)
        t[i] = thread(philosopher, i);
    
    for (int i = 0; i < 5; ++i)
        t[i].join();
        
    return 0;
}
