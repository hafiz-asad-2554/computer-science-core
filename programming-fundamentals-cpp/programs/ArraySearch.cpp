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
    int arr[10], i, searchElement, found = 0, position = -1;
    
    cout << "========================================" << endl;
    cout << "         Array Search Program            " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter 10 numbers:" << endl;
    for(i = 0; i < 10; i++)
    {
        cout << "Enter number " << (i+1) << ": ";
        cin >> arr[i];
    }
    
    cout << "\nEnter element to search: ";
    cin >> searchElement;
    
    // Linear search
    for(i = 0; i < 10; i++)
    {
        if(arr[i] == searchElement)
        {
            found = 1;
            position = i;
            break;
        }
    }
    
    cout << "\n========================================" << endl;
    cout << "Array elements: ";
    for(i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    if(found)
        cout << "Element " << searchElement << " found at position " << (position+1) << endl;
    else
        cout << "Element " << searchElement << " not found in the array." << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}