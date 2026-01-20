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
    string fatherName = "Ghulam Mustafa";
    string rollNo = "S23NDOCS1M01042";
    string phoneNo = "03032554632";
    string address = "Dunga Bunga";
    string department = "Computer Science";
    string semester = "1st";
    string university = "The Islamia University of Bahawalpur";
    string campus = "Bahawalnagar";

    // Display personal details with good formatting
    cout << "\n" << string(60, '=') << endl;
    cout << "                 STUDENT INFORMATION" << endl;
    cout << string(60, '=') << endl;
    cout << "Name: " << name << endl;
    cout << "Father Name: " << fatherName << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Phone No: " << phoneNo << endl;
    cout << "Address: " << address << endl;
    cout << string(60, '-') << endl;
    cout << "Department: " << department << endl;
    cout << "Semester: " << semester << endl;
    cout << "University: " << university << endl;
    cout << "Campus: " << campus << endl;
    cout << string(60, '=') << endl;

    return 0;
}