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

int power(int base, int exp)
{
    int result = 1;
    for(int i = 1; i <= exp; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base, exp;
    
    cout << "========================================" << endl;
    cout << "        Power Function                  " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;
    
    if(exp < 0)
    {
        cout << "Negative exponents not supported in this program!" << endl;
    }
    else
    {
        cout << base << "^" << exp << " = " << power(base, exp) << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}