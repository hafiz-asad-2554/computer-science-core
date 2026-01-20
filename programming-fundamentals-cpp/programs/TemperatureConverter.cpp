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
    int choice;
    float temp, result;
    
    cout << "========================================" << endl;
    cout << "      Temperature Converter             " << endl;
    cout << "========================================" << endl;
    
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    
    switch(choice)
    {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            result = (temp * 9.0/5.0) + 32;
            cout << temp << " Celsius = " << result << " Fahrenheit" << endl;
            break;
        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            result = (temp - 32) * 5.0/9.0;
            cout << temp << " Fahrenheit = " << result << " Celsius" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}