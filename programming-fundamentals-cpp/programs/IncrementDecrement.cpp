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
    int a = 10, b = 10;
    
    cout << "========================================" << endl;
    cout << "     Increment and Decrement Demo       " << endl;
    cout << "========================================" << endl;
    
    cout << "Initial values: a = " << a << ", b = " << b << endl;
    
    // Pre-increment
    cout << "\nPre-increment: ++a" << endl;
    cout << "Value of (++a): " << ++a << endl;
    cout << "Value of a after pre-increment: " << a << endl;
    
    // Reset value
    a = 10;
    cout << "\nReset a to 10: a = " << a << endl;
    
    // Post-increment
    cout << "\nPost-increment: a++" << endl;
    cout << "Value of (a++): " << a++ << endl;
    cout << "Value of a after post-increment: " << a << endl;
    
    // Pre-decrement
    cout << "\nPre-decrement: --a" << endl;
    cout << "Value of (--a): " << --a << endl;
    cout << "Value of a after pre-decrement: " << a << endl;
    
    // Post-decrement
    cout << "\nPost-decrement: a--" << endl;
    cout << "Value of (a--): " << a-- << endl;
    cout << "Value of a after post-decrement: " << a << endl;
    
    // Demonstrate in expressions
    a = 5;
    b = 5;
    cout << "\nIn expressions:" << endl;
    cout << "a = 5, b = 5" << endl;
    cout << "++a + b = " << ++a + b << endl;  // a becomes 6, then 6 + 5 = 11
    cout << "a = " << a << ", b = " << b << endl;
    
    a = 5;
    b = 5;
    cout << "a++ + b = " << a++ + b << endl;  // 5 + 5 = 10, then a becomes 6
    cout << "a = " << a << ", b = " << b << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}