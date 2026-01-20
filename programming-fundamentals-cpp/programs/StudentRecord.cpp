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

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    string name;
    int rollNo;
    string department;
    Date dob;  // nested structure
    float marks[5];
    float average;
};

int main()
{
    Student s;
    int i;
    float total = 0;
    
    cout << "========================================" << endl;
    cout << "          Student Record System         " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter student name: ";
    getline(cin, s.name);
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cin.ignore(); // Clear buffer
    cout << "Enter department: ";
    getline(cin, s.department);
    
    cout << "Enter date of birth:" << endl;
    cout << "Day: ";
    cin >> s.dob.day;
    cout << "Month: ";
    cin >> s.dob.month;
    cout << "Year: ";
    cin >> s.dob.year;
    
    cout << "Enter marks for 5 subjects:" << endl;
    for(i = 0; i < 5; i++)
    {
        cout << "Subject " << (i+1) << ": ";
        cin >> s.marks[i];
        total += s.marks[i];
    }
    
    s.average = total / 5;
    
    cout << "\n========================================" << endl;
    cout << "           STUDENT INFORMATION          " << endl;
    cout << "========================================" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Department: " << s.department << endl;
    cout << "Date of Birth: " << s.dob.day << "/" << s.dob.month << "/" << s.dob.year << endl;
    cout << "Marks:" << endl;
    for(i = 0; i < 5; i++)
    {
        cout << "  Subject " << (i+1) << ": " << s.marks[i] << endl;
    }
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Average: " << s.average << "%" << endl;
    cout << "========================================" << endl;
    
    return 0;
}