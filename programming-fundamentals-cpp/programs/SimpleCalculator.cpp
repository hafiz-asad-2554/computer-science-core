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

int main() {
    // Variables for personal details
    string name = "HAFIZ MUHAMMAD ASAD MUSTAFA";
    string rollNo = "S23NDOCS1M01042";
    string department = "Computer Science";
    string university = "The Islamia University of Bahawalpur";
    string campus = "Bahawalnagar";

    // Variables for calculator
    double num1, num2, result;
    char operation;

    cout << "\n" << string(50, '=') << endl;
    cout << "              SIMPLE CALCULATOR" << endl;
    cout << string(50, '=') << endl;
    
    cout << "Student: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << string(50, '-') << endl;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }

    cout << string(50, '=') << endl;
    cout << "        CALCULATION COMPLETED" << endl;
    cout << string(50, '=') << endl;

    return 0;
}