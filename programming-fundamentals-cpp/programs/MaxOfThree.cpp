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

int maxOfTwo(int a, int b)
{
    return (a > b) ? a : b;
}

int maxOfThree(int a, int b, int c)
{
    return maxOfTwo(maxOfTwo(a, b), c);
}

int main()
{
    int num1, num2, num3;
    
    cout << "========================================" << endl;
    cout << "         Maximum of Three Numbers       " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    
    cout << "\n========================================" << endl;
    cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "Maximum: " << maxOfThree(num1, num2, num3) << endl;
    
    // Also show max of pairs
    cout << "Max of " << num1 << " and " << num2 << ": " << maxOfTwo(num1, num2) << endl;
    cout << "Max of " << num2 << " and " << num3 << ": " << maxOfTwo(num2, num3) << endl;
    cout << "Max of " << num1 << " and " << num3 << ": " << maxOfTwo(num1, num3) << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}