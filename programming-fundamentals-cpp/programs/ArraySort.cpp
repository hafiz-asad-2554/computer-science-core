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
    int arr[10], i, j, temp;
    
    cout << "========================================" << endl;
    cout << "         Array Sorting Program           " << endl;
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
    
    // Bubble sort
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout << "Sorted array (ascending): ";
    for(i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Sort in descending order
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9-i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout << "Sorted array (descending): ";
    for(i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}