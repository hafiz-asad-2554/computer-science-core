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
    char ch;
    
    cout << "========================================" << endl;
    cout << "         Character Check Program        " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a character: ";
    cin >> ch;
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "\nCharacter '" << ch << "' is a vowel." << endl;
    }
    else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout << "\nCharacter '" << ch << "' is a consonant." << endl;
    }
    else
    {
        cout << "\nCharacter '" << ch << "' is not an alphabet." << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}