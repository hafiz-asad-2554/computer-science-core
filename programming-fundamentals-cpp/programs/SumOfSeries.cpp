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
    cout << "        Sum of Series (1+2+3+...+n)     " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Series: ";
    for(i = 1; i <= n; i++)
    {
        sum += i;
        cout << i;
        if(i < n) cout << " + ";
    }
    
    cout << endl;
    cout << "Sum of series 1+2+3+...+" << n << " = " << sum << endl;
    
    // Alternative formula: n*(n+1)/2
    long long formulaSum = (long long)n * (n + 1) / 2;
    cout << "Using formula n*(n+1)/2 = " << formulaSum << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}