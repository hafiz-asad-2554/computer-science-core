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

long long factorial(int n)
{
    if(n < 0)
        return -1; // Error case
    else if(n == 0 || n == 1)
        return 1;
    else
    {
        long long result = 1;
        for(int i = 2; i <= n; i++)
        {
            result *= i;
        }
        return result;
    }
}

int main()
{
    int num;
    
    cout << "========================================" << endl;
    cout << "         Factorial Function             " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a number: ";
    cin >> num;
    
    long long result = factorial(num);
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    
    if(result == -1)
    {
        cout << "Factorial is not defined for negative numbers!" << endl;
    }
    else
    {
        cout << "Number: " << num << endl;
        cout << "Factorial: " << result << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}