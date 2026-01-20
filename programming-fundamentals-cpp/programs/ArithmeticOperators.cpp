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
    float num1, num2;
    float add, sub, mul, div, mod;
    
    cout << "========================================" << endl;
    cout << "      Arithmetic Operators Program       " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    
    if(num2 != 0)
        div = num1 / num2;
    else
        div = 0;
    
    // For modulo, we'll use integer conversion
    int int1 = (int)num1;
    int int2 = (int)num2;
    if(int2 != 0)
        mod = int1 % int2;
    else
        mod = 0;
    
    cout << "\n========================================" << endl;
    cout << "           OPERATIONS RESULTS           " << endl;
    cout << "========================================" << endl;
    cout << "Addition: " << num1 << " + " << num2 << " = " << add << endl;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << sub << endl;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << mul << endl;
    if(num2 != 0)
        cout << "Division: " << num1 << " / " << num2 << " = " << div << endl;
    else
        cout << "Division: Cannot divide by zero" << endl;
    if(int2 != 0)
        cout << "Modulo: " << int1 << " % " << int2 << " = " << (int)mod << endl;
    else
        cout << "Modulo: Cannot perform modulo by zero" << endl;
    cout << "========================================" << endl;
    
    return 0;
}