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
    int num, limit;
    
    cout << "========================================" << endl;
    cout << "         Multiplication Tables          " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter number for multiplication table: ";
    cin >> num;
    cout << "Enter limit: ";
    cin >> limit;
    
    cout << "\n========================================" << endl;
    cout << "        TABLE OF " << num << " (UPTO " << limit << ")        " << endl;
    cout << "========================================" << endl;
    
    for(int i = 1; i <= limit; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}