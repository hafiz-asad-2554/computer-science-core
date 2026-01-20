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
    float weight, height, bmi;
    
    cout << "========================================" << endl;
    cout << "           BMI Calculator               " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter your weight (in kg): ";
    cin >> weight;
    cout << "Enter your height (in meters): ";
    cin >> height;
    
    bmi = weight / (height * height);
    
    cout << "\n========================================" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " m" << endl;
    cout << "BMI: " << bmi << endl;
    
    if(bmi < 18.5)
        cout << "Category: Underweight" << endl;
    else if(bmi >= 18.5 && bmi < 24.9)
        cout << "Category: Normal weight" << endl;
    else if(bmi >= 25 && bmi < 29.9)
        cout << "Category: Overweight" << endl;
    else
        cout << "Category: Obesity" << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}