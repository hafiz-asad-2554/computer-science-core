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
    int arr[5], i;
    int *ptr = arr;
    int sum = 0, average;
    
    cout << "========================================" << endl;
    cout << "       Pointer Array Sum Program         " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter 5 numbers:" << endl;
    for(i = 0; i < 5; i++)
    {
        cout << "Enter number " << (i+1) << ": ";
        cin >> *(ptr + i);
    }
    
    // Calculate sum using pointers
    for(i = 0; i < 5; i++)
    {
        sum += *(ptr + i);
    }
    
    average = sum / 5;
    
    cout << "\n========================================" << endl;
    cout << "Array elements: ";
    for(i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    cout << "Sum using pointers: " << sum << endl;
    cout << "Average: " << average << endl;
    
    // Show addresses
    cout << "Addresses: " << endl;
    for(i = 0; i < 5; i++)
    {
        cout << "Address of arr[" << i << "]: " << (ptr + i) << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}