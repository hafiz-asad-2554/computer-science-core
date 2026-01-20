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
    int rows, i, j;
    
    cout << "========================================" << endl;
    cout << "         Number Pattern Print           " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "\nPattern 1 (Sequential numbers):" << endl;
    int num = 1;
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    
    cout << "\nPattern 2 (Row number repeated):" << endl;
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
    cout << "\nPattern 3 (Pyramid with numbers):" << endl;
    for(i = 1; i <= rows; i++)
    {
        // Print spaces
        for(j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        // Print numbers
        for(j = 1; j <= i; j++)
        {
            cout << j;
        }
        // Print reverse numbers
        for(j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}