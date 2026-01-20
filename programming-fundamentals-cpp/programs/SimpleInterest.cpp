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
    float principal, rate, time, simpleInterest;
    
    cout << "========================================" << endl;
    cout << "        Simple Interest Calculator       " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;
    
    simpleInterest = (principal * rate * time) / 100;
    
    cout << "\n========================================" << endl;
    cout << "Principal Amount: " << principal << endl;
    cout << "Rate of Interest: " << rate << "%" << endl;
    cout << "Time Period: " << time << " years" << endl;
    cout << "Simple Interest: " << simpleInterest << endl;
    cout << "Total Amount: " << (principal + simpleInterest) << endl;
    cout << "========================================" << endl;
    
    return 0;
}