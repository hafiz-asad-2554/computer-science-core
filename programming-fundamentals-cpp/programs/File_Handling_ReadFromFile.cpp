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
    ifstream inFile("student_data.txt");
    
    cout << "========================================" << endl;
    cout << "         Read From File Program         " << endl;
    cout << "========================================" << endl;
    
    if(inFile.is_open())
    {
        string line;
        
        cout << "Reading data from file:" << endl;
        cout << "----------------------------------------" << endl;
        
        while(getline(inFile, line))
        {
            cout << line << endl;
        }
        
        inFile.close();
    }
    else
    {
        cout << "Unable to open file!" << endl;
        cout << "Make sure 'student_data.txt' exists." << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}