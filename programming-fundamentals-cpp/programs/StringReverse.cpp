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
#include <algorithm>
using namespace std;

int main()
{
    string str;
    
    cout << "========================================" << endl;
    cout << "           String Reverse Program        " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    string original = str;
    reverse(str.begin(), str.end());
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "Original string: " << original << endl;
    cout << "Reversed string: " << str << endl;
    cout << "========================================" << endl;
    
    return 0;
}