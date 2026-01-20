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
using namespace std;

int main()
{
    float marks;
    char grade;
    
    cout << "========================================" << endl;
    cout << "         Grade Calculator               " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter marks (out of 100): ";
    cin >> marks;
    
    if(marks >= 90 && marks <= 100)
        grade = 'A';
    else if(marks >= 80 && marks < 90)
        grade = 'B';
    else if(marks >= 70 && marks < 80)
        grade = 'C';
    else if(marks >= 60 && marks < 70)
        grade = 'D';
    else if(marks >= 0 && marks < 60)
        grade = 'F';
    else
    {
        cout << "Invalid marks! Please enter marks between 0 and 100." << endl;
        return 0;
    }
    
    cout << "\n========================================" << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    
    switch(grade)
    {
        case 'A':
            cout << "Excellent Performance!" << endl;
            break;
        case 'B':
            cout << "Good Performance!" << endl;
            break;
        case 'C':
            cout << "Average Performance!" << endl;
            break;
        case 'D':
            cout << "Below Average Performance!" << endl;
            break;
        case 'F':
            cout << "Failed! Need to work harder." << endl;
            break;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}