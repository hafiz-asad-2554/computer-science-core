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

int main() {
    // Variables for personal details
    string name = "HAFIZ MUHAMMAD ASAD MUSTAFA";
    string rollNo = "S23NDOCS1M01042";
    string department = "Computer Science";

    int num1, num2, num3, largest;

    cout << "\n" << string(50, '=') << endl;
    cout << "              LARGEST NUMBER" << endl;
    cout << string(50, '=') << endl;
    
    cout << "Student: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Department: " << department << endl;
    cout << string(50, '-') << endl;
    
    cout << "Enter three numbers to find the largest:" << endl;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    cout << "Third number: ";
    cin >> num3;

    largest = num1; // Assume first number is the largest initially
    
    if(num2 > largest) {
        largest = num2;
    }
    
    if(num3 > largest) {
        largest = num3;
    }

    cout << "\nThe largest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << largest << endl;

    cout << string(50, '=') << endl;
    cout << "        COMPARISON COMPLETED" << endl;
    cout << string(50, '=') << endl;

    return 0;
}