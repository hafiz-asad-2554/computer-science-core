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
    float length, width, area, perimeter;
    
    cout << "========================================" << endl;
    cout << "      Rectangle Calculator              " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    
    area = length * width;
    perimeter = 2 * (length + width);
    
    cout << "\n========================================" << endl;
    cout << "Rectangle Details:" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "========================================" << endl;
    
    return 0;
}