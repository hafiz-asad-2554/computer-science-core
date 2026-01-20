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
    int start, end, i, j, isPrime;
    
    cout << "========================================" << endl;
    cout << "        Prime Numbers in Range          " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;
    
    cout << "\nPrime numbers between " << start << " and " << end << " are:" << endl;
    
    for(i = start; i <= end; i++)
    {
        if(i == 1 || i == 0)
            continue;
            
        isPrime = 1;
        
        for(j = 2; j <= i/2; ++j)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        
        if(isPrime == 1)
            cout << i << " ";
    }
    
    cout << endl;
    cout << "========================================" << endl;
    
    return 0;
}