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
    int *max, *min;
    
    cout << "========================================" << endl;
    cout << "    Pointer Max/Min in Array            " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter 5 numbers:" << endl;
    for(i = 0; i < 5; i++)
    {
        cout << "Enter number " << (i+1) << ": ";
        cin >> *(ptr + i);
    }
    
    // Initialize max and min pointers to first element
    max = ptr;
    min = ptr;
    
    // Find max and min using pointers
    for(i = 1; i < 5; i++)
    {
        if(*(ptr + i) > *max)
            max = ptr + i;
        if(*(ptr + i) < *min)
            min = ptr + i;
    }
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "Array elements: ";
    for(i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    cout << "Maximum value: " << *max << endl;
    cout << "Address of max: " << max << endl;
    cout << "Minimum value: " << *min << endl;
    cout << "Address of min: " << min << endl;
    cout << "========================================" << endl;
    
    return 0;
}