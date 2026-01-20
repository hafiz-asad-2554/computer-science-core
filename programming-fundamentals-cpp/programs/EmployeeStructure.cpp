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

struct Employee
{
    string name;
    string id;
    float salary;
    string department;
};

int main()
{
    Employee emp;
    
    cout << "========================================" << endl;
    cout << "         Employee Structure Program      " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter employee name: ";
    getline(cin, emp.name);
    cout << "Enter employee ID: ";
    getline(cin, emp.id);
    cout << "Enter salary: ";
    cin >> emp.salary;
    cin.ignore(); // Clear the buffer
    cout << "Enter department: ";
    getline(cin, emp.department);
    
    cout << "\n========================================" << endl;
    cout << "             EMPLOYEE INFO              " << endl;
    cout << "========================================" << endl;
    cout << "Name: " << emp.name << endl;
    cout << "ID: " << emp.id << endl;
    cout << "Salary: $" << emp.salary << endl;
    cout << "Department: " << emp.department << endl;
    cout << "========================================" << endl;
    
    return 0;
}