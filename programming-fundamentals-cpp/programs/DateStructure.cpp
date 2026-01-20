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

int main()
{
    Date d;
    
    cout << "========================================" << endl;
    cout << "           Date Information             " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter date (day month year): ";
    cin >> d.day >> d.month >> d.year;
    
    // Validate date
    if(d.day < 1 || d.day > 31 || d.month < 1 || d.month > 12 || d.year < 1900)
    {
        cout << "Invalid date entered!" << endl;
        return 0;
    }
    
    string monthNames[] = {"", "January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"};
    
    cout << "\n========================================" << endl;
    cout << "Date: " << d.day << "/" << d.month << "/" << d.year << endl;
    cout << "Formatted: " << d.day << " " << monthNames[d.month] << " " << d.year << endl;
    
    // Check if leap year
    bool isLeapYear = (d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0);
    cout << "Year " << d.year << " is " << (isLeapYear ? "" : "not ") << "a leap year." << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}