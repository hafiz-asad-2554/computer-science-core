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
#include <cctype>
using namespace std;

int main()
{
    char ch;
    
    cout << "========================================" << endl;
    cout << "       Vowel/Consonant Checker          " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a character: ";
    cin >> ch;
    
    // Convert to lowercase for easier checking
    ch = tolower(ch);
    
    if((ch >= 'a' && ch <= 'z'))
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << "'" << (char)toupper(ch) << "' is a vowel." << endl;
        }
        else
        {
            cout << "'" << (char)toupper(ch) << "' is a consonant." << endl;
        }
    }
    else
    {
        cout << "'" << ch << "' is not an alphabet character." << endl;
    }
    
    // Also demonstrate using switch
    cout << "\nUsing switch statement:" << endl;
    switch(tolower(ch))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Character is a vowel (checked with switch)." << endl;
            break;
        case 'b': case 'c': case 'd': case 'f': case 'g':
        case 'h': case 'j': case 'k': case 'l': case 'm':
        case 'n': case 'p': case 'q': case 'r': case 's':
        case 't': case 'v': case 'w': case 'x': case 'y':
        case 'z':
            cout << "Character is a consonant (checked with switch)." << endl;
            break;
        default:
            cout << "Not an alphabet character." << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}