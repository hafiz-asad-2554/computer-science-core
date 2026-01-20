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
    int a, b, c;
    
    cout << "========================================" << endl;
    cout << "       Logical Operators Program        " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    cout << "\n========================================" << endl;
    cout << "          LOGICAL OPERATIONS            " << endl;
    cout << "========================================" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "(a > b) && (b > c) = " << ((a > b) && (b > c) ? "True" : "False") << endl;
    cout << "(a > b) || (b > c) = " << ((a > b) || (b > c) ? "True" : "False") << endl;
    cout << "!(a > b) = " << (!(a > b) ? "True" : "False") << endl;
    cout << "========================================" << endl;
    
    return 0;
}