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

int main() {
    // Variables for personal details
    string name = "HAFIZ MUHAMMAD ASAD MUSTAFA";
    string rollNo = "S23NDOCS1M01042";
    string department = "Computer Science";

    string inputString;
    string reversedString;

    cout << "\n" << string(50, '=') << endl;
    cout << "              REVERSE STRING" << endl;
    cout << string(50, '=') << endl;
    
    cout << "Student: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Department: " << department << endl;
    cout << string(50, '-') << endl;
    
    cout << "Enter a string to reverse: ";
    getline(cin, inputString);

    reversedString = inputString;
    reverse(reversedString.begin(), reversedString.end());

    cout << "\nOriginal string: " << inputString << endl;
    cout << "Reversed string: " << reversedString << endl;

    cout << string(50, '=') << endl;
    cout << "        STRING REVERSAL COMPLETED" << endl;
    cout << string(50, '=') << endl;

    return 0;
}