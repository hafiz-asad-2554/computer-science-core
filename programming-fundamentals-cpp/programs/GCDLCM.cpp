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

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2;
    
    cout << "========================================" << endl;
    cout << "        GCD and LCM Calculator          " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "\n========================================" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "GCD: " << gcd(num1, num2) << endl;
    cout << "LCM: " << lcm(num1, num2) << endl;
    cout << "========================================" << endl;
    
    return 0;
}