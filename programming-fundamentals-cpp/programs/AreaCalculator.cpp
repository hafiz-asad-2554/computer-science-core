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
    float length, width, radius, base, height, area;
    const float PI = 3.14159;
    
    cout << "========================================" << endl;
    cout << "         Area Calculator                " << endl;
    cout << "========================================" << endl;
    
    cout << "Choose shape to calculate area:" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    
    switch(choice)
    {
        case 1:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            area = length * width;
            cout << "Area of rectangle = " << area << endl;
            break;
        case 2:
            cout << "Enter radius: ";
            cin >> radius;
            area = PI * radius * radius;
            cout << "Area of circle = " << area << endl;
            break;
        case 3:
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Area of triangle = " << area << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}