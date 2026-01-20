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
    int num = 42;
    int *ptr = &num;
    int **ptr2 = &ptr;
    
    cout << "========================================" << endl;
    cout << "       Pointer to Pointer Demo           " << endl;
    cout << "========================================" << endl;
    
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr (address of num): " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value of ptr2 (address of ptr): " << ptr2 << endl;
    cout << "Value pointed by ptr2: " << *ptr2 << endl;
    cout << "Value pointed by *ptr2 (double dereference): " << **ptr2 << endl;
    
    cout << "\n========================================" << endl;
    
    // Change value using double pointer
    **ptr2 = 100;
    cout << "After changing value using double pointer:" << endl;
    cout << "New value of num: " << num << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}