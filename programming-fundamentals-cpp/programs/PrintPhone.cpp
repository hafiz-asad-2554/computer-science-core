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

int main() {
    // Variables for personal details
    string name = "HAFIZ MUHAMMAD ASAD MUSTAFA";
    string phoneNo = "03032554632";
    string rollNo = "S23NDOCS1M01042";
    string department = "Computer Science";
    string university = "The Islamia University of Bahawalpur";
    string campus = "Bahawalnagar";

    // Display phone number with good formatting
    cout << "\n" << string(50, '=') << endl;
    cout << "                  PHONE NUMBER" << endl;
    cout << string(50, '=') << endl;
    cout << "Name: " << name << endl;
    cout << "Phone No: " << phoneNo << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << string(50, '-') << endl;
    cout << "Department: " << department << endl;
    cout << "University: " << university << endl;
    cout << "Campus: " << campus << endl;
    cout << string(50, '=') << endl;

    return 0;
}