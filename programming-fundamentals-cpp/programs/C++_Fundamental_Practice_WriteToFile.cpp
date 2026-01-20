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
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Variables for personal details
    string name = "HAFIZ MUHAMMAD ASAD MUSTAFA";
    string rollNo = "S23NDOCS1M01042";
    string department = "Computer Science";

    string filename = "student_info.txt";
    ofstream outFile(filename);

    cout << "\n" << string(50, '=') << endl;
    cout << "              WRITE TO FILE" << endl;
    cout << string(50, '=') << endl;
    
    cout << "Student: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Department: " << department << endl;
    cout << string(50, '-') << endl;

    if(outFile.is_open()) {
        outFile << "Student Information" << endl;
        outFile << "===================" << endl;
        outFile << "Name: " << name << endl;
        outFile << "Roll No: " << rollNo << endl;
        outFile << "Department: " << department << endl;
        outFile << "University: The Islamia University of Bahawalpur" << endl;
        outFile << "Campus: Bahawalnagar" << endl;
        
        cout << "Data successfully written to " << filename << endl;
        outFile.close();
    } else {
        cout << "Unable to open file for writing!" << endl;
    }

    cout << string(50, '=') << endl;
    cout << "        FILE WRITE COMPLETED" << endl;
    cout << string(50, '=') << endl;

    return 0;
}