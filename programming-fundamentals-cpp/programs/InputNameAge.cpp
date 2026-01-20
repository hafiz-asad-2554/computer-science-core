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

int main()
{
    string name;
    int age;
    
    cout << "========================================" << endl;
    cout << "        Input Name and Age              " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "\n--- Output ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "========================================" << endl;
    
    return 0;
}