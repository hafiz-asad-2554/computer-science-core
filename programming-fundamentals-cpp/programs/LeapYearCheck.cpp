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
    int year;
    
    cout << "========================================" << endl;
    cout << "           Leap Year Checker            " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a year: ";
    cin >> year;
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a leap year." << endl;
        cout << "February has 29 days in " << year << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
        cout << "February has 28 days in " << year << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}