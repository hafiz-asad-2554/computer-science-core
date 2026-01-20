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
    int arr[10], i, evenCount = 0, oddCount = 0;
    
    cout << "========================================" << endl;
    cout << "      Count Even and Odd Numbers        " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter 10 numbers:" << endl;
    for(i = 0; i < 10; i++)
    {
        cout << "Enter number " << (i+1) << ": ";
        cin >> arr[i];
        
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "Numbers entered: ";
    for(i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Count of Even Numbers: " << evenCount << endl;
    cout << "Count of Odd Numbers: " << oddCount << endl;
    cout << "========================================" << endl;
    
    return 0;
}