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
    int arr[10], size, max, min;
    
    cout << "========================================" << endl;
    cout << "         Array Max & Min Finder         " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter size of array (max 10): ";
    cin >> size;
    
    if(size > 10 || size <= 0)
    {
        cout << "Invalid size! Size should be between 1 and 10." << endl;
        return 0;
    }
    
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    max = min = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "Array elements: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    cout << "========================================" << endl;
    
    return 0;
}