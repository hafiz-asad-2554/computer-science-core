#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

using namespace std;

queue<int> buffer;
int max_size = 5;
mutex mtx;
condition_variable cv;

void producer(int val) {
    while (val) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [] { return buffer.size() < max_size; });
        buffer.push(val);
        cout << "Produced: " << val << endl;
        val--;
        lock.unlock();
        cv.notify_all();
    }
}

void consumer() {
    while (true) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [] { return !buffer.empty(); });
        int val = buffer.front();
        buffer.pop();
        cout << "Consumed: " << val << endl;
        lock.unlock();
        cv.notify_all();
        if (val == 1) break; 
    }
}

int main() {
    // Note: This needs C++11 or higher
    thread t1(producer, 10);
    thread t2(consumer);
    t1.join();
    t2.join();
    return 0;
}
