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
    float principal, rate, time, amount, ci;
    int n; // compounding frequency
    
    cout << "========================================" << endl;
    cout << "    Compound Interest Calculator        " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;
    cout << "Enter compounding frequency per year (1, 2, 4, 12, 365): ";
    cin >> n;
    
    rate = rate / 100.0; // convert percentage to decimal
    
    // Calculate compound interest: A = P(1 + r/n)^(nt)
    amount = principal * pow((1 + rate/n), n*time);
    ci = amount - principal;
    
    cout << "\n========================================" << endl;
    cout << "Principal Amount: " << principal << endl;
    cout << "Interest Rate: " << (rate*100) << "% per annum" << endl;
    cout << "Time Period: " << time << " years" << endl;
    cout << "Compounding: " << n << " times per year" << endl;
    cout << "Final Amount: " << amount << endl;
    cout << "Compound Interest: " << ci << endl;
    cout << "========================================" << endl;
    
    return 0;
}