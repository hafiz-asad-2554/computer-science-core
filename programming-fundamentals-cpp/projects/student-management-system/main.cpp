#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Using a struct to hold student data
struct Student {
    string name;
    int roll_no;
    string course;
};

// Global array to simulate database
Student students[100];
int totalStudents = 0;

void addStudent() {
    if (totalStudents >= 100) {
        cout << "Database is full!" << endl;
        return;
    }
    cout << "Enter Name: ";
    cin >> students[totalStudents].name;
    cout << "Enter Roll No: ";
    cin >> students[totalStudents].roll_no;
    cout << "Enter Course: ";
    cin >> students[totalStudents].course;
    
    totalStudents++;
    cout << "Student Added Successfully!" << endl;
}

void showStudents() {
    if (totalStudents == 0) {
        cout << "No records found." << endl;
        return;
    }
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < totalStudents; i++) {
        cout << "Roll No: " << students[i].roll_no 
             << " | Name: " << students[i].name 
             << " | Course: " << students[i].course << endl;
    }
    cout << "-----------------------\n";
}

void searchStudent() {
    int roll;
    cout << "Enter Roll No to search: ";
    cin >> roll;
    
    bool found = false;
    for (int i = 0; i < totalStudents; i++) {
        if (students[i].roll_no == roll) {
            cout << "\nRecord Found:\n";
            cout << "Name: " << students[i].name << endl;
            cout << "Course: " << students[i].course << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student not found!" << endl;
    }
}

int main() {
    int choice;
    while(true) {
        cout << "\n=== Student Management System ===\n";
        cout << "1. Add Student\n";
        cout << "2. Show All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: addStudent(); break;
            case 2: showStudents(); break;
            case 3: searchStudent(); break;
            case 4: 
                cout << "Exiting..." << endl;
                return 0;
            default: cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
