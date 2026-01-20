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
    int num1, num2;
    
    cout << "========================================" << endl;
    cout << "      Relational Operators Program       " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "\n========================================" << endl;
    cout << "          RELATIONAL OPERATIONS         " << endl;
    cout << "========================================" << endl;
    cout << num1 << " > " << num2 << " = " << (num1 > num2 ? "True" : "False") << endl;
    cout << num1 << " < " << num2 << " = " << (num1 < num2 ? "True" : "False") << endl;
    cout << num1 << " >= " << num2 << " = " << (num1 >= num2 ? "True" : "False") << endl;
    cout << num1 << " <= " << num2 << " = " << (num1 <= num2 ? "True" : "False") << endl;
    cout << num1 << " == " << num2 << " = " << (num1 == num2 ? "True" : "False") << endl;
    cout << num1 << " != " << num2 << " = " << (num1 != num2 ? "True" : "False") << endl;
    cout << "========================================" << endl;
    
    return 0;
}