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
    float num1, num2, result;
    char op;
    
    cout << "========================================" << endl;
    cout << "           Switch Calculator            " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "\n========================================" << endl;
    cout << "              CALCULATION               " << endl;
    cout << "========================================" << endl;
    
    switch(op)
    {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            }
            else
            {
                cout << "Error: Cannot divide by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}