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
    int choice;
    float speed, result;
    const float KMH_TO_MPH = 0.621371;
    const float MPH_TO_KMH = 1.60934;
    
    cout << "========================================" << endl;
    cout << "        Speed Converter                 " << endl;
    cout << "========================================" << endl;
    
    cout << "1. km/h to mph" << endl;
    cout << "2. mph to km/h" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    
    switch(choice)
    {
        case 1:
            cout << "Enter speed in km/h: ";
            cin >> speed;
            result = speed * KMH_TO_MPH;
            cout << speed << " km/h = " << result << " mph" << endl;
            break;
        case 2:
            cout << "Enter speed in mph: ";
            cin >> speed;
            result = speed * MPH_TO_KMH;
            cout << speed << " mph = " << result << " km/h" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}