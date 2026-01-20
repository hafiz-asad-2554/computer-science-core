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
    ofstream outFile("student_data.txt");
    
    cout << "========================================" << endl;
    cout << "          Write To File Program         " << endl;
    cout << "========================================" << endl;
    
    if(outFile.is_open())
    {
        string name, phone;
        int marks;
        
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter phone number: ";
        getline(cin, phone);
        cout << "Enter marks: ";
        cin >> marks;
        
        outFile << "Student Name: " << name << endl;
        outFile << "Phone: " << phone << endl;
        outFile << "Marks: " << marks << endl;
        
        outFile.close();
        cout << "\nData written to file successfully!" << endl;
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}