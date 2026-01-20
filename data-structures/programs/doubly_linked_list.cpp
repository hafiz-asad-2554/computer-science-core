#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
    Node* head;
public:
    DoublyLinkedList() { head = NULL; }
    
    void insert(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;
        newNode->prev = NULL;
        
        if(head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while(temp->next != NULL) temp = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
        }
    }
    
    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insert(10);
    dll.insert(200);
    dll.display();
    return 0;
}
