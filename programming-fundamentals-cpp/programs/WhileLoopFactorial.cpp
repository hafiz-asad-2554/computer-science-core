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
    int num;
    long long factorial = 1;
    
    cout << "========================================" << endl;
    cout << "           Factorial Calculator         " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if(num < 0)
    {
        cout << "Factorial is not defined for negative numbers!" << endl;
    }
    else
    {
        int temp = num;
        while(temp > 0)
        {
            factorial *= temp;
            temp--;
        }
        
        cout << "\n========================================" << endl;
        cout << "              RESULTS                   " << endl;
        cout << "========================================" << endl;
        cout << "Number: " << num << endl;
        cout << "Factorial: " << factorial << endl;
        cout << "========================================" << endl;
    }
    
    return 0;
}