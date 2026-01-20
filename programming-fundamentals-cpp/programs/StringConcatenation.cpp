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

int main()
{
    string str1, str2, result;
    int i, j;
    
    cout << "========================================" << endl;
    cout << "      String Concatenation Program       " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    
    // Manual concatenation
    result = str1;
    for(i = 0; i < str2.length(); i++)
    {
        result += str2[i];
    }
    
    cout << "\n========================================" << endl;
    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;
    cout << "Concatenated string: " << result << endl;
    cout << "Length of concatenated string: " << result.length() << endl;
    
    // Also show using built-in concatenation
    string builtInResult = str1 + str2;
    cout << "Built-in concatenation: " << builtInResult << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}