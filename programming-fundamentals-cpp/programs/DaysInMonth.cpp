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
    int month, year;
    
    cout << "========================================" << endl;
    cout << "       Days in Month Calculator         " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    
    if(month < 1 || month > 12)
    {
        cout << "Invalid month! Please enter a value between 1 and 12." << endl;
    }
    else
    {
        cout << "\n========================================" << endl;
        cout << "Year: " << year << endl;
        
        switch(month)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                cout << "Month " << month << " has 31 days." << endl;
                break;
            case 4: case 6: case 9: case 11:
                cout << "Month " << month << " has 30 days." << endl;
                break;
            case 2:
                // Check for leap year
                if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                {
                    cout << "Month " << month << " has 29 days (leap year)." << endl;
                }
                else
                {
                    cout << "Month " << month << " has 28 days." << endl;
                }
                break;
        }
        cout << "========================================" << endl;
    }
    
    return 0;
}