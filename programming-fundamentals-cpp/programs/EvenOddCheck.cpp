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

    int number;

    cout << "\n" << string(50, '=') << endl;
    cout << "              EVEN/ODD CHECK" << endl;
    cout << string(50, '=') << endl;
    
    cout << "Student: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Department: " << department << endl;
    cout << string(50, '-') << endl;
    
    cout << "Enter a number to check if it's even or odd: ";
    cin >> number;

    if(number % 2 == 0) {
        cout << number << " is an EVEN number." << endl;
    } else {
        cout << number << " is an ODD number." << endl;
    }

    cout << string(50, '=') << endl;
    cout << "        CHECK COMPLETED" << endl;
    cout << string(50, '=') << endl;

    return 0;
}