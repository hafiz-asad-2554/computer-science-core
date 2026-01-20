#include<iostream>
#include<mutex>
#include<thread>
using namespace std;

mutex readMtx, writeMtx;
int readCount = 0;
int dataVar = 0;

void reader(int id) {
    readMtx.lock();
    readCount++;
    if(readCount == 1) writeMtx.lock();
    readMtx.unlock();

    cout << "Reader " << id << " read data : " << dataVar << endl;

    readMtx.lock();
    readCount--;
    if(readCount == 0) writeMtx.unlock();
    readMtx.unlock();
}

void writer(int id) {
    writeMtx.lock();
    dataVar++;
    cout << "Writer " << id << " updated data to " << dataVar << endl;
    writeMtx.unlock();
}

int main() {
    thread t1(reader, 1);
    thread t2(writer, 1);
    thread t3(reader, 2);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}
