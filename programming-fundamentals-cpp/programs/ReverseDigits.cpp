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
    int num, reversed = 0, remainder, original;
    
    cout << "========================================" << endl;
    cout << "         Reverse Digits of Number       " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a number: ";
    cin >> num;
    
    original = num;
    
    while(num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    cout << "Original number: " << original << endl;
    cout << "Reversed number: " << reversed << endl;
    
    // Check if it's a palindrome
    if(original == reversed)
        cout << original << " is a palindrome!" << endl;
    else
        cout << original << " is not a palindrome." << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}