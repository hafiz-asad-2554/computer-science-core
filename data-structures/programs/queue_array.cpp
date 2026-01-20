#include <iostream>
using namespace std;

class Queue {
    int front, rear, size;
    unsigned capacity;
    int* array;
public:
    Queue(unsigned capacity) {
        this->capacity = capacity;
        front = this->size = 0;
        rear = capacity - 1;
        array = new int[this->capacity];
    }

    void enqueue(int item) {
        if (size == capacity) return;
        rear = (rear + 1) % capacity;
        array[rear] = item;
        size = size + 1;
        cout << item << " enqueued to queue\n";
    }

    int dequeue() {
        if (size == 0) return -1;
        int item = array[front];
        front = (front + 1) % capacity;
        size = size - 1;
        return item;
    }
};

int main() {
    Queue queue(100);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    
    cout << queue.dequeue() << " dequeued from queue\n";
    return 0;
}
