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
    int a, b, mod;
    
    cout << "========================================" << endl;
    cout << "       Modular Arithmetic               " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter modulus: ";
    cin >> mod;
    
    if(mod <= 0)
    {
        cout << "Modulus must be positive!" << endl;
        return 1;
    }
    
    cout << "\n========================================" << endl;
    cout << "Numbers: a = " << a << ", b = " << b << ", mod = " << mod << endl;
    cout << "Results:" << endl;
    cout << a << " mod " << mod << " = " << (a % mod) << endl;
    cout << b << " mod " << mod << " = " << (b % mod) << endl;
    cout << "(" << a << " + " << b << ") mod " << mod << " = " << ((a + b) % mod) << endl;
    cout << "(" << a << " - " << b << ") mod " << mod << " = " << ((a - b + mod) % mod) << endl;
    cout << "(" << a << " * " << b << ") mod " << mod << " = " << ((a * b) % mod) << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}