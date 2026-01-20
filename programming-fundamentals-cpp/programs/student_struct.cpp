#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    Student s1;

    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter roll number: ";
    cin >> s1.rollNo;
    cout << "Enter marks: ";
    cin >> s1.marks;

    cout << "\nDisplaying Information:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.rollNo << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
