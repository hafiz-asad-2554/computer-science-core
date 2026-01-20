#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void stackDemo() {
    stack<int> s;
    int choice, val;
    while(true) {
        cout << "\nStack Operations: 1. Push 2. Pop 3. Top 4. Back\n";
        cin >> choice;
        if(choice == 4) break;
        switch(choice) {
            case 1: cout << "Val: "; cin >> val; s.push(val); break;
            case 2: if(!s.empty()) s.pop(); else cout << "Empty\n"; break;
            case 3: if(!s.empty()) cout << "Top: " << s.top() << endl; break;
        }
    }
}

void queueDemo() {
    queue<int> q;
    int choice, val;
    while(true) {
        cout << "\nQueue Operations: 1. Enqueue 2. Dequeue 3. Front 4. Back\n";
        cin >> choice;
        if(choice == 4) break;
        switch(choice) {
            case 1: cout << "Val: "; cin >> val; q.push(val); break;
            case 2: if(!q.empty()) q.pop(); else cout << "Empty\n"; break;
            case 3: if(!q.empty()) cout << "Front: " << q.front() << endl; break;
        }
    }
}

int main() {
    int c;
    while(true) {
        cout << "\nSimulate: 1. Stack 2. Queue 3. Exit\n";
        cin >> c;
        if(c==1) stackDemo();
        else if(c==2) queueDemo();
        else break;
    }
    return 0;
}
