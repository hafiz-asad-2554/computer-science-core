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
    cout << "         Triangle Pattern Print         " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "\nPattern 1 (Right Triangle):" << endl;
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nPattern 2 (Inverted Triangle):" << endl;
    for(i = rows; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nPattern 3 (Pyramid):" << endl;
    for(i = 1; i <= rows; i++)
    {
        // Print spaces
        for(j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        // Print stars
        for(j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}