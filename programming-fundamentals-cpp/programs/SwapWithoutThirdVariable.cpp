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
    int a, b;
    
    cout << "========================================" << endl;
    cout << "    Swap Two Numbers (Without Third)    " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    cout << "\nBefore swapping:" << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
    
    // Method 1: Using arithmetic operators
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "\nAfter swapping (using arithmetic operators):" << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
    
    // Method 2: Using XOR (restoring original values first)
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    cout << "\nSwapped back using XOR:" << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}