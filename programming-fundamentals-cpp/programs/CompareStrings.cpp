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
    string str1, str2;
    
    cout << "========================================" << endl;
    cout << "          Compare Strings Program        " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;
    
    if(str1 == str2)
    {
        cout << "Strings are equal." << endl;
    }
    else
    {
        cout << "Strings are not equal." << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}