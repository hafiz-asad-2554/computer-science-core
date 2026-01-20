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

struct Person
{
    string name;
    int age;
    string phone;
    string address;
};

int main()
{
    Person p;
    
    cout << "========================================" << endl;
    cout << "         Display Structure Program       " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter name: ";
    getline(cin, p.name);
    cout << "Enter age: ";
    cin >> p.age;
    cin.ignore(); // Clear buffer
    cout << "Enter phone: ";
    getline(cin, p.phone);
    cout << "Enter address: ";
    getline(cin, p.address);
    
    cout << "\n========================================" << endl;
    cout << "              PERSON INFO               " << endl;
    cout << "========================================" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Phone: " << p.phone << endl;
    cout << "Address: " << p.address << endl;
    cout << "========================================" << endl;
    
    return 0;
}