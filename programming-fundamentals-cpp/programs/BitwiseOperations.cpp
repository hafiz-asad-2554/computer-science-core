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
    cout << "       Bitwise Operations               " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    cout << "\n========================================" << endl;
    cout << "Numbers: a = " << a << ", b = " << b << endl;
    cout << "Binary representation:" << endl;
    cout << "a = " << a << " (Decimal)" << endl;
    cout << "b = " << b << " (Decimal)" << endl;
    
    cout << "\nBitwise Operations:" << endl;
    cout << "a & b = " << (a & b) << " (AND)" << endl;
    cout << "a | b = " << (a | b) << " (OR)" << endl;
    cout << "a ^ b = " << (a ^ b) << " (XOR)" << endl;
    cout << "~a = " << (~a) << " (NOT a)" << endl;
    cout << "~b = " << (~b) << " (NOT b)" << endl;
    cout << "a << 1 = " << (a << 1) << " (Left shift by 1)" << endl;
    cout << "a >> 1 = " << (a >> 1) << " (Right shift by 1)" << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}