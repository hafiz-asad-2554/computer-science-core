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

char getGrade(float marks)
{
    if(marks >= 90) return 'A';
    else if(marks >= 80) return 'B';
    else if(marks >= 70) return 'C';
    else if(marks >= 60) return 'D';
    else return 'F';
}

int main()
{
    string subjects[5] = {"Math", "Physics", "Chemistry", "English", "Computer"};
    float marks[5];
    float total = 0;
    int i;
    
    cout << "========================================" << endl;
    cout << "      Student Marks and Grade Calc      " << endl;
    cout << "========================================" << endl;
    
    for(i = 0; i < 5; i++)
    {
        cout << "Enter marks for " << subjects[i] << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    
    cout << "\n========================================" << endl;
    cout << "           MARKS SUMMARY                " << endl;
    cout << "========================================" << endl;
    
    for(i = 0; i < 5; i++)
    {
        cout << subjects[i] << ": " << marks[i] << " (" << getGrade(marks[i]) << ")" << endl;
    }
    
    cout << "----------------------------------------" << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Average: " << (total/5) << "%" << endl;
    cout << "Overall Grade: " << getGrade(total/5) << endl;
    cout << "========================================" << endl;
    
    return 0;
}