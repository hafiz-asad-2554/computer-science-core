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
    int arr[5], *ptr;
    ptr = arr;
    
    cout << "========================================" << endl;
    cout << "         Pointer Array Program           " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter 5 elements: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
    }
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "Array elements using pointer: ";
    for(int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    cout << "========================================" << endl;
    
    return 0;
}