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
    
    cout << "========================================" << endl;
    cout << "           Grade Calculator             " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter marks (out of 100): ";
    cin >> marks;
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "Marks: " << marks << endl;
    
    if(marks >= 90 && marks <= 100)
    {
        cout << "Grade: A+" << endl;
        cout << "Excellent Performance!" << endl;
    }
    else if(marks >= 80 && marks < 90)
    {
        cout << "Grade: A" << endl;
        cout << "Very Good Performance!" << endl;
    }
    else if(marks >= 70 && marks < 80)
    {
        cout << "Grade: B" << endl;
        cout << "Good Performance!" << endl;
    }
    else if(marks >= 60 && marks < 70)
    {
        cout << "Grade: C" << endl;
        cout << "Satisfactory Performance!" << endl;
    }
    else if(marks >= 50 && marks < 60)
    {
        cout << "Grade: D" << endl;
        cout << "Pass" << endl;
    }
    else if(marks >= 0 && marks < 50)
    {
        cout << "Grade: F" << endl;
        cout << "Fail" << endl;
    }
    else
    {
        cout << "Invalid marks entered!" << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}