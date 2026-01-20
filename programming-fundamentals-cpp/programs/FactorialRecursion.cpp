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

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int num;
    
    cout << "========================================" << endl;
    cout << "        Factorial Using Recursion       " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if(num < 0)
    {
        cout << "Factorial of negative number doesn't exist!" << endl;
    }
    else
    {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}