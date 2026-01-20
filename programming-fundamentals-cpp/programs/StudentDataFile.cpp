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

int main()
{
    ofstream outFile("student_records.txt");
    
    cout << "========================================" << endl;
    cout << "       Student Data File Program        " << endl;
    cout << "========================================" << endl;
    
    if(outFile.is_open())
    {
        string name, phone, course;
        int rollNo, marks;
        
        cout << "Enter student details:" << endl;
        cout << "Name: ";
        getline(cin, name);
        cout << "Roll No: ";
        cin >> rollNo;
        cin.ignore(); // Clear buffer
        cout << "Phone: ";
        getline(cin, phone);
        cout << "Course: ";
        getline(cin, course);
        cout << "Marks: ";
        cin >> marks;
        
        outFile << "Student Record" << endl;
        outFile << "===============" << endl;
        outFile << "Name: " << name << endl;
        outFile << "Roll No: " << rollNo << endl;
        outFile << "Phone: " << phone << endl;
        outFile << "Course: " << course << endl;
        outFile << "Marks: " << marks << endl;
        outFile << "===============" << endl;
        
        outFile.close();
        cout << "\nStudent data written to file successfully!" << endl;
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }
    
    // Now read the data back
    ifstream inFile("student_records.txt");
    string line;
    
    cout << "\nReading data from file:" << endl;
    cout << "----------------------------------------" << endl;
    
    if(inFile.is_open())
    {
        while(getline(inFile, line))
        {
            cout << line << endl;
        }
        inFile.close();
    }
    else
    {
        cout << "Unable to open file for reading!" << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}