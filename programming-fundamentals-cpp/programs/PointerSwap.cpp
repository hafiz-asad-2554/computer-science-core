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

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    
    cout << "========================================" << endl;
    cout << "         Pointer Swap Program            " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "\n========================================" << endl;
    cout << "              BEFORE SWAP               " << endl;
    cout << "========================================" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    
    swap(&num1, &num2);
    
    cout << "\n========================================" << endl;
    cout << "              AFTER SWAP                " << endl;
    cout << "========================================" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "========================================" << endl;
    
    return 0;
}