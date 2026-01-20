#include <iostream>
using namespace std;

class CircularQueue {
    int rear, front;
    int size;
    int *arr;
public:
    CircularQueue(int s) {
       front = rear = -1;
       size = s;
       arr = new int[s];
    }
    
    void enQueue(int value) {
        if ((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))) {
            cout << "\nQueue is Full";
            return;
        }
        else if (front == -1) { /* Insert First Element */
            front = rear = 0;
            arr[rear] = value;
        }
        else if (rear == size-1 && front != 0) {
            rear = 0;
            arr[rear] = value;
        }
        else {
            rear++;
            arr[rear] = value;
        }
    }
    
    int deQueue() {
        if (front == -1) {
            cout << "\nQueue is Empty";
            return -1;
        }
        int data = arr[front];
        arr[front] = -1;
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else if (front == size-1)
            front = 0;
        else
            front++;
        
        return data;
    }
};

int main() {
    CircularQueue q(5);
    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);
    
    cout << "Deleted: " << q.deQueue() << endl;
    cout << "Deleted: " << q.deQueue() << endl;
    return 0;
}
