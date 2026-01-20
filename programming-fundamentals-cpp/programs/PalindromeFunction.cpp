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
#include <string>
using namespace std;

bool isPalindrome(int num)
{
    int original = num, reversed = 0, remainder;
    
    while(num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return original == reversed;
}

bool isPalindrome(string str)
{
    int len = str.length();
    for(int i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-1-i])
            return false;
    }
    return true;
}

int main()
{
    int number;
    string text;
    
    cout << "========================================" << endl;
    cout << "      Palindrome Checker Functions      " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a number: ";
    cin >> number;
    
    if(isPalindrome(number))
        cout << number << " is a palindrome number." << endl;
    else
        cout << number << " is not a palindrome number." << endl;
    
    cin.ignore(); // Clear buffer
    cout << "Enter a string: ";
    getline(cin, text);
    
    if(isPalindrome(text))
        cout << "\"" << text << "\" is a palindrome string." << endl;
    else
        cout << "\"" << text << "\" is not a palindrome string." << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}