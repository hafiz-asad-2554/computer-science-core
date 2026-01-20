#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node* next;
};

template <typename T>
class LinkedList {
    Node<T>* head;
public:
    LinkedList() { head = NULL; }
    void insert(T val) {
        Node<T>* n = new Node<T>;
        n->data = val;
        n->next = head;
        head = n;
    }
    void display() {
        Node<T>* temp = head;
        while(temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

#endif
