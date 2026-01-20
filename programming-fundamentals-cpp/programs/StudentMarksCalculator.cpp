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

int main()
{
    string name;
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;
    
    cout << "========================================" << endl;
    cout << "       Student Marks Calculator         " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter student name: ";
    getline(cin, name);
    
    cout << "Enter marks for 5 subjects:" << endl;
    cout << "Subject 1: ";
    cin >> sub1;
    cout << "Subject 2: ";
    cin >> sub2;
    cout << "Subject 3: ";
    cin >> sub3;
    cout << "Subject 4: ";
    cin >> sub4;
    cout << "Subject 5: ";
    cin >> sub5;
    
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;
    
    cout << "\n========================================" << endl;
    cout << "           MARKS REPORT                 " << endl;
    cout << "========================================" << endl;
    cout << "Student Name: " << name << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "========================================" << endl;
    
    return 0;
}