#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
};

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        cout << "For student " << i + 1 << ":" << endl;
        cout << "Enter name: ";
        cin >> students[i].name;
        cout << "Enter roll no: ";
        cin >> students[i].rollNo;
    }

    cout << "\nStudent List:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Student: " << students[i].name << " (Roll: " << students[i].rollNo << ")" << endl;
    }

    return 0;
}
