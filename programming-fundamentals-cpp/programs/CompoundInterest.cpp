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
#include <cmath>
using namespace std;

int main()
{
    float principal, rate, time, amount, compoundInterest;
    
    cout << "========================================" << endl;
    cout << "      Compound Interest Calculator      " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;
    
    // Convert rate to decimal
    rate = rate / 100;
    
    // Calculate compound interest: A = P(1 + r)^t
    amount = principal * pow((1 + rate), time);
    compoundInterest = amount - principal;
    
    cout << "\n========================================" << endl;
    cout << "Principal Amount: " << principal << endl;
    cout << "Interest Rate: " << (rate * 100) << "%" << endl;
    cout << "Time Period: " << time << " years" << endl;
    cout << "Amount after " << time << " years: " << amount << endl;
    cout << "Compound Interest: " << compoundInterest << endl;
    cout << "========================================" << endl;
    
    return 0;
}