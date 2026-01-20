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
    string str;
    int vowelCount = 0;
    
    cout << "========================================" << endl;
    cout << "           Count Vowels Program          " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    for(int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowelCount++;
        }
    }
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "Input string: " << str << endl;
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "========================================" << endl;
    
    return 0;
}