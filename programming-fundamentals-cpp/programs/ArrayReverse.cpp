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
    int arr[10], reversedArr[10], i;
    
    cout << "========================================" << endl;
    cout << "         Array Reverse Program           " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter 10 numbers:" << endl;
    for(i = 0; i < 10; i++)
    {
        cout << "Enter number " << (i+1) << ": ";
        cin >> arr[i];
    }
    
    cout << "\nOriginal array: ";
    for(i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Reverse the array manually
    for(i = 0; i < 10; i++)
    {
        reversedArr[i] = arr[9-i];
    }
    
    cout << "Reversed array: ";
    for(i = 0; i < 10; i++)
    {
        cout << reversedArr[i] << " ";
    }
    cout << endl;
    
    // Reverse in place
    for(i = 0; i < 5; i++)
    {
        int temp = arr[i];
        arr[i] = arr[9-i];
        arr[9-i] = temp;
    }
    
    cout << "Array reversed in place: ";
    for(i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}