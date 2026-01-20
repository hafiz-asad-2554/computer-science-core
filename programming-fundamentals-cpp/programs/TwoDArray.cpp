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
    int arr[3][3], i, j, sum = 0;
    
    cout << "========================================" << endl;
    cout << "         2D Array Operations            " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter elements for 3x3 matrix:" << endl;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    
    cout << "\nMatrix entered:" << endl;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Calculate sum of all elements
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    
    cout << "\nSum of all elements: " << sum << endl;
    
    // Print diagonal elements
    cout << "Diagonal elements: ";
    for(i = 0; i < 3; i++)
    {
        cout << arr[i][i] << " ";
    }
    cout << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}