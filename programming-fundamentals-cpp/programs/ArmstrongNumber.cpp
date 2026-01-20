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
#include <cmath>
using namespace std;

int main()
{
    int num, originalNum, remainder, result = 0, n = 0;
    
    cout << "========================================" << endl;
    cout << "      Armstrong Number Checker          " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a number: ";
    cin >> num;
    
    originalNum = num;
    
    // Count number of digits
    int temp = num;
    while(temp != 0)
    {
        temp /= 10;
        ++n;
    }
    
    temp = num;
    // Calculate sum of digits raised to power n
    while(temp != 0)
    {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }
    
    if(result == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;
    
    // Also show Armstrong numbers in range 1 to originalNum
    cout << "\nArmstrong numbers from 1 to " << originalNum << " are: ";
    for(int i = 1; i <= originalNum; i++)
    {
        int temp2 = i, sum = 0, rem, digitCount = 0;
        int temp3 = i;
        
        // Count digits
        while(temp3 != 0)
        {
            temp3 /= 10;
            digitCount++;
        }
        
        temp3 = i;
        // Calculate sum of digits raised to power digitCount
        while(temp3 != 0)
        {
            rem = temp3 % 10;
            sum += pow(rem, digitCount);
            temp3 /= 10;
        }
        
        if(sum == i)
            cout << i << " ";
    }
    cout << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}