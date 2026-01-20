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

struct Student
{
    string name;
    int rollNo;
    float marks;
};

int main()
{
    ofstream outFile("binary_students.dat", ios::binary);
    
    cout << "========================================" << endl;
    cout << "      Binary File Handling Example      " << endl;
    cout << "========================================" << endl;
    
    if(outFile.is_open())
    {
        Student s;
        
        cout << "Enter student details:" << endl;
        cout << "Name: ";
        getline(cin, s.name);
        cout << "Roll No: ";
        cin >> s.rollNo;
        cout << "Marks: ";
        cin >> s.marks;
        cin.ignore(); // Clear buffer
        
        // Write to binary file
        outFile.write(reinterpret_cast<char*>(&s), sizeof(s));
        outFile.close();
        
        cout << "\nData written to binary file successfully!" << endl;
    }
    else
    {
        cout << "Unable to open file for writing!" << endl;
    }
    
    // Read from binary file
    ifstream inFile("binary_students.dat", ios::binary);
    Student readStudent;
    
    if(inFile.is_open())
    {
        inFile.read(reinterpret_cast<char*>(&readStudent), sizeof(readStudent));
        inFile.close();
        
        cout << "\nData read from binary file:" << endl;
        cout << "Name: " << readStudent.name << endl;
        cout << "Roll No: " << readStudent.rollNo << endl;
        cout << "Marks: " << readStudent.marks << endl;
    }
    else
    {
        cout << "Unable to open file for reading!" << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}