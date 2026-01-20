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
using namespace std;

int main()
{
    int totalSeconds, hours, minutes, seconds;
    
    cout << "========================================" << endl;
    cout << "         Time Converter                 " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter time in seconds: ";
    cin >> totalSeconds;
    
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    
    cout << "\n========================================" << endl;
    cout << "Total seconds: " << totalSeconds << endl;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
    cout << "Formatted time: " << hours << ":" << minutes << ":" << seconds << endl;
    cout << "========================================" << endl;
    
    return 0;
}