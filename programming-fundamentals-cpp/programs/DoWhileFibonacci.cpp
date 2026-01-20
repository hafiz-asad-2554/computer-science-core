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
    int n, first = 0, second = 1, next;
    
    cout << "========================================" << endl;
    cout << "         Fibonacci Series               " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter number of terms: ";
    cin >> n;
    
    cout << "\n========================================" << endl;
    cout << "        FIBONACCI SERIES                " << endl;
    cout << "========================================" << endl;
    
    if(n <= 0)
    {
        cout << "Number of terms should be positive!" << endl;
    }
    else if(n == 1)
    {
        cout << "Fibonacci Series: " << first << endl;
    }
    else
    {
        int count = 0;
        cout << "Fibonacci Series: ";
        
        do
        {
            if(count == 0)
            {
                cout << first << " ";
                count++;
            }
            else if(count == 1)
            {
                cout << second << " ";
                count++;
            }
            else
            {
                next = first + second;
                cout << next << " ";
                first = second;
                second = next;
                count++;
            }
        } while(count < n);
        
        cout << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}