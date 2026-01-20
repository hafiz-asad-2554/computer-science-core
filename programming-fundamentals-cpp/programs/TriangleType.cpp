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
    float side1, side2, side3;
    
    cout << "========================================" << endl;
    cout << "        Triangle Type Checker           " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter three sides of a triangle:" << endl;
    cout << "Side 1: ";
    cin >> side1;
    cout << "Side 2: ";
    cin >> side2;
    cout << "Side 3: ";
    cin >> side3;
    
    // Check if triangle is valid
    if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        cout << "\nTriangle is valid!" << endl;
        
        // Check type of triangle
        if(side1 == side2 && side2 == side3)
        {
            cout << "Triangle Type: Equilateral (All sides equal)" << endl;
        }
        else if(side1 == side2 || side2 == side3 || side1 == side3)
        {
            cout << "Triangle Type: Isosceles (Two sides equal)" << endl;
        }
        else
        {
            cout << "Triangle Type: Scalene (All sides different)" << endl;
        }
        
        // Check if it's a right triangle
        if(side1*side1 + side2*side2 == side3*side3 ||
           side1*side1 + side3*side3 == side2*side2 ||
           side2*side2 + side3*side3 == side1*side1)
        {
            cout << "Triangle Type: Right-angled" << endl;
        }
    }
    else
    {
        cout << "Triangle is not valid! Sum of any two sides must be greater than the third side." << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}