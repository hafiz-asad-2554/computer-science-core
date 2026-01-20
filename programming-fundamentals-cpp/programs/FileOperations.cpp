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
    string filename = "sample.txt";
    
    cout << "========================================" << endl;
    cout << "         File Operations Demo            " << endl;
    cout << "========================================" << endl;
    
    // Write to file
    ofstream outFile(filename);
    if(outFile.is_open())
    {
        outFile << "This is a sample text file.\n";
        outFile << "Created for C++ file handling practice.\n";
        outFile << "Name: HAFIZ MUHAMMAD ASAD MUSTAFA\n";
        outFile << "Roll No: S23NDOCS1M01042\n";
        outFile.close();
        cout << "Data written to file successfully!" << endl;
    }
    else
    {
        cout << "Unable to create file!" << endl;
        return 1;
    }
    
    // Read from file
    ifstream inFile(filename);
    string line;
    cout << "\nReading from file '" << filename << "':" << endl;
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
        return 1;
    }
    
    // Append to file
    ofstream appendFile(filename, ios::app);
    if(appendFile.is_open())
    {
        appendFile << "Additional line appended to the file.\n";
        appendFile.close();
        cout << "\nData appended to file successfully!" << endl;
    }
    else
    {
        cout << "Unable to open file for appending!" << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}