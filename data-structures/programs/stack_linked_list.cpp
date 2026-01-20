#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* top = NULL;

void push(int data) {
    Node* temp = new Node();
    if (!temp) {
        cout << "\nHeap Overflow";
        return;
    }
    temp->data = data;
    temp->link = top;
    top = temp;
}

void pop() {
    Node* temp;
    if (top == NULL) {
        cout << "\nStack Underflow" << endl;
        return;
    } else {
        temp = top;
        top = top->link;
        delete temp;
    }
}

void display() {
    Node* temp;
    if (top == NULL) {
        cout << "\nStack Underflow";
        return;
    } else {
        temp = top;
        while (temp != NULL) {
            cout << temp->data << "-> ";
            temp = temp->link;
        }
    }
}

int main() {
    push(11);
    push(22);
    push(33);
    display();
    pop();
    cout << "\nAfter pop:\n";
    display();
    return 0;
}
