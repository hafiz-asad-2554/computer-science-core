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

struct Student
{
    string name;
    string phone;
    int rollNo;
    float marks;
};

int main()
{
    Student s;
    
    cout << "========================================" << endl;
    cout << "         Student Structure Program       " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter student name: ";
    getline(cin, s.name);
    cout << "Enter student phone: ";
    getline(cin, s.phone);
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cout << "Enter marks: ";
    cin >> s.marks;
    
    cout << "\n========================================" << endl;
    cout << "              STUDENT INFO              " << endl;
    cout << "========================================" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Phone: " << s.phone << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Marks: " << s.marks << endl;
    cout << "========================================" << endl;
    
    return 0;
}