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
    cout << "       Sum of Squares (1^2+2^2+...+n^2) " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Series: ";
    for(i = 1; i <= n; i++)
    {
        sum += i * i;
        cout << i << "^2";
        if(i < n) cout << " + ";
    }
    
    cout << endl;
    cout << "Sum of squares 1^2+2^2+...+" << n << "^2 = " << sum << endl;
    
    // Using formula: n(n+1)(2n+1)/6
    long long formulaSum = (long long)n * (n + 1) * (2 * n + 1) / 6;
    cout << "Using formula n(n+1)(2n+1)/6 = " << formulaSum << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}