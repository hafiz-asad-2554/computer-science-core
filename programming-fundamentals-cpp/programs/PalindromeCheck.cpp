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
#include <cctype>
using namespace std;

int main()
{
    string str, reversedStr;
    int i, len;
    
    cout << "========================================" << endl;
    cout << "         Palindrome Checker             " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    len = str.length();
    reversedStr = str;
    
    // Reverse the string manually
    for(i = 0; i < len/2; i++)
    {
        char temp = reversedStr[i];
        reversedStr[i] = reversedStr[len-1-i];
        reversedStr[len-1-i] = temp;
    }
    
    cout << "\nOriginal string: " << str << endl;
    cout << "Reversed string: " << reversedStr << endl;
    
    // Check if palindrome (case insensitive)
    bool isPalindrome = true;
    for(i = 0; i < len; i++)
    {
        if(tolower(str[i]) != tolower(reversedStr[i]))
        {
            isPalindrome = false;
            break;
        }
    }
    
    if(isPalindrome)
        cout << str << " is a palindrome!" << endl;
    else
        cout << str << " is not a palindrome." << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}