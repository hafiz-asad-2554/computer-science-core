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
#include <ctime>
using namespace std;

int main() {
    // Get current date
    time_t now = time(0);
    char* date = ctime(&now);

    // Variables for personal details
    string name = "HAFIZ MUHAMMAD ASAD MUSTAFA";
    string rollNo = "S23NDOCS1M01042";

    // Display today's date with good formatting
    cout << "\n" << string(50, '=') << endl;
    cout << "                   TODAY'S DATE" << endl;
    cout << string(50, '=') << endl;
    cout << "\nDate: " << date;
    cout << "Prepared by: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "\n" << string(50, '=') << endl;
    cout << "        DATE DISPLAY PROGRAM - " << date;
    cout << string(50, '=') << endl;

    return 0;
}