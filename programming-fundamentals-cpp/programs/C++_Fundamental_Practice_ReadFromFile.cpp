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
    string line;
    ifstream inFile(filename);

    cout << "\n" << string(50, '=') << endl;
    cout << "              READ FROM FILE" << endl;
    cout << string(50, '=') << endl;
    
    cout << "Student: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Department: " << department << endl;
    cout << string(50, '-') << endl;

    if(inFile.is_open()) {
        cout << "Reading from " << filename << ":" << endl;
        cout << string(40, '-') << endl;
        
        while(getline(inFile, line)) {
            cout << line << endl;
        }
        
        inFile.close();
        cout << string(40, '-') << endl;
        cout << "File reading completed successfully!" << endl;
    } else {
        cout << "Unable to open file for reading!" << endl;
        cout << "Make sure " << filename << " exists in the directory." << endl;
    }

    cout << string(50, '=') << endl;
    cout << "        FILE READ COMPLETED" << endl;
    cout << string(50, '=') << endl;

    return 0;
}