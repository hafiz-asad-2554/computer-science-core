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
    float sum, difference, product, division;
    
    cout << "========================================" << endl;
    cout << "    Sum, Difference, Product Calculator   " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    if(num2 != 0)
        division = num1 / num2;
    else
        division = 0; // Avoid division by zero
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    if(num2 != 0)
        cout << "Division: " << division << endl;
    else
        cout << "Division: Cannot divide by zero" << endl;
    cout << "========================================" << endl;
    
    return 0;
}