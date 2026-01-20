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
#include <string>
using namespace std;

struct Car
{
    string make;
    string model;
    string color;
    int year;
    float price;
};

int main()
{
    Car c;
    
    cout << "========================================" << endl;
    cout << "            Car Information             " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter car make: ";
    getline(cin, c.make);
    cout << "Enter car model: ";
    getline(cin, c.model);
    cout << "Enter car color: ";
    getline(cin, c.color);
    cout << "Enter manufacturing year: ";
    cin >> c.year;
    cout << "Enter price: ";
    cin >> c.price;
    cin.ignore(); // Clear buffer
    
    cout << "\n========================================" << endl;
    cout << "              CAR INFO                  " << endl;
    cout << "========================================" << endl;
    cout << "Make: " << c.make << endl;
    cout << "Model: " << c.model << endl;
    cout << "Color: " << c.color << endl;
    cout << "Year: " << c.year << endl;
    cout << "Price: $" << c.price << endl;
    cout << "========================================" << endl;
    
    return 0;
}