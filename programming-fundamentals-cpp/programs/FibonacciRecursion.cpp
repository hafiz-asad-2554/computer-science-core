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

int fibonacci(int n)
{
    if(n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n, i;
    
    cout << "========================================" << endl;
    cout << "      Fibonacci Using Recursion         " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter number of terms: ";
    cin >> n;
    
    cout << "Fibonacci Series: ";
    for(i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    
    cout << endl;
    cout << "========================================" << endl;
    
    return 0;
}