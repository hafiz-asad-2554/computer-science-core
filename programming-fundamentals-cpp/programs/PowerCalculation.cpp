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
    int base, exponent, result = 1, i;
    
    cout << "========================================" << endl;
    cout << "        Power Calculation               " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    
    if(exponent == 0)
        result = 1;
    else
    {
        for(i = 1; i <= exponent; i++)
        {
            result *= base;
        }
    }
    
    cout << base << "^" << exponent << " = " << result << endl;
    
    // Calculate using nested loop to show powers from 1 to exponent
    cout << "\nPowers of " << base << ":" << endl;
    for(i = 0; i <= exponent; i++)
    {
        int tempResult = 1;
        int j;
        if(i == 0)
            tempResult = 1;
        else
        {
            for(j = 1; j <= i; j++)
            {
                tempResult *= base;
            }
        }
        cout << base << "^" << i << " = " << tempResult << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}