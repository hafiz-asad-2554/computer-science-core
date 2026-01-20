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
    int n, i;
    long long sum = 0;
    
    cout << "========================================" << endl;
    cout << "     Sum of Cubes (1^3+2^3+...+n^3)     " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Series: ";
    for(i = 1; i <= n; i++)
    {
        long long cube = i * i * i;
        sum += cube;
        cout << i << "^3";
        if(i < n) cout << " + ";
    }
    
    cout << endl;
    cout << "Sum of cubes 1^3+2^3+...+" << n << "^3 = " << sum << endl;
    
    // Using formula: [n(n+1)/2]^2
    long long formulaSum = (long long)(n * (n + 1) / 2) * (n * (n + 1) / 2);
    cout << "Using formula [n(n+1)/2]^2 = " << formulaSum << endl;
    
    cout << "\nCubes of numbers from 1 to " << n << ":" << endl;
    for(i = 1; i <= n; i++)
    {
        cout << i << "^3 = " << i*i*i << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}