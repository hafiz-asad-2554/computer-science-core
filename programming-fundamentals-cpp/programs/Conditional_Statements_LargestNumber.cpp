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
    int num1, num2, num3;
    
    cout << "========================================" << endl;
    cout << "       Largest of Three Numbers         " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
    
    if(num1 >= num2 && num1 >= num3)
    {
        cout << "Largest number is: " << num1 << endl;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        cout << "Largest number is: " << num2 << endl;
    }
    else
    {
        cout << "Largest number is: " << num3 << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}