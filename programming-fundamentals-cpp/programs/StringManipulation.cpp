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
#include <algorithm>
using namespace std;

int main()
{
    string str, reversedStr, upperStr, lowerStr;
    int i;
    
    cout << "========================================" << endl;
    cout << "         String Manipulation            " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    // Copy original string for operations
    reversedStr = str;
    upperStr = str;
    lowerStr = str;
    
    // Manual reverse
    int len = str.length();
    for(i = 0; i < len/2; i++)
    {
        char temp = reversedStr[i];
        reversedStr[i] = reversedStr[len-1-i];
        reversedStr[len-1-i] = temp;
    }
    
    // Convert to uppercase manually
    for(i = 0; i < upperStr.length(); i++)
    {
        if(upperStr[i] >= 'a' && upperStr[i] <= 'z')
            upperStr[i] = upperStr[i] - 32;
    }
    
    // Convert to lowercase manually
    for(i = 0; i < lowerStr.length(); i++)
    {
        if(lowerStr[i] >= 'A' && lowerStr[i] <= 'Z')
            lowerStr[i] = lowerStr[i] + 32;
    }
    
    cout << "\n========================================" << endl;
    cout << "             RESULTS                    " << endl;
    cout << "========================================" << endl;
    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << reversedStr << endl;
    cout << "Uppercase: " << upperStr << endl;
    cout << "Lowercase: " << lowerStr << endl;
    cout << "Length: " << str.length() << endl;
    cout << "========================================" << endl;
    
    return 0;
}