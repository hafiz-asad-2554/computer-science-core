// Name: HAFIZ MUHAMMAD ASAD MUSTAFA
// Father Name: Ghulam Mustafa
// Roll No: S23NDOCS1M01042
// Phone No: 03032554632
// Address: Dunga Bunga
// Department: Computer Science
// Semester: 1st
// University: The Islamia University of Bahawalpur
// Campus: Bahawalnagar

#include <iostream>
#include <string>
using namespace std;

// Structure definition for student
struct Student {
    string name;
    string rollNo;
    string department;
    int age;
    float gpa;
};

int main() {
    // Variables for personal details
    string myName = "HAFIZ MUHAMMAD ASAD MUSTAFA";
    string myRollNo = "S23NDOCS1M01042";
    string myDepartment = "Computer Science";

    // Create a student structure
    Student student1;

    cout << "\n" << string(60, '=') << endl;
    cout << "              STUDENT STRUCTURE" << endl;
    cout << string(60, '=') << endl;
    
    cout << "Programmer: " << myName << endl;
    cout << "Roll No: " << myRollNo << endl;
    cout << "Department: " << myDepartment << endl;
    cout << string(60, '-') << endl;
    
    // Input student information
    cout << "Enter student information:" << endl;
    cout << "Name: ";
    getline(cin, student1.name);
    cout << "Roll No: ";
    getline(cin, student1.rollNo);
    cout << "Department: ";
    getline(cin, student1.department);
    cout << "Age: ";
    cin >> student1.age;
    cout << "GPA: ";
    cin >> student1.gpa;

    // Display student information
    cout << "\n" << string(40, '-') << endl;
    cout << "Student Information:" << endl;
    cout << string(40, '-') << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Roll No: " << student1.rollNo << endl;
    cout << "Department: " << student1.department << endl;
    cout << "Age: " << student1.age << endl;
    cout << "GPA: " << student1.gpa << endl;

    cout << string(60, '=') << endl;
    cout << "        STUDENT RECORD COMPLETED" << endl;
    cout << string(60, '=') << endl;

    return 0;
}