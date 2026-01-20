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
    int num, i, sum = 0;
    
    cout << "========================================" << endl;
    cout << "       Perfect Number Checker           " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a number: ";
    cin >> num;
    
    // Find all divisors and sum them
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    
    if(sum == num)
        cout << num << " is a perfect number." << endl;
    else
        cout << num << " is not a perfect number." << endl;
    
    cout << "Proper divisors of " << num << ": ";
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Sum of proper divisors: " << sum << endl;
    
    cout << "\nFirst few perfect numbers: ";
    int count = 0;
    for(int n = 2; count < 3 && n < 10000; n++)
    {
        sum = 0;
        for(i = 1; i < n; i++)
        {
            if(n % i == 0)
                sum += i;
        }
        if(sum == n)
        {
            cout << n << " ";
            count++;
        }
    }
    cout << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}