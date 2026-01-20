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

int main() {
    // Variables for personal details
    string name = "HAFIZ MUHAMMAD ASAD MUSTAFA";
    string rollNo = "S23NDOCS1M01042";
    string department = "Computer Science";

    const int size = 5;
    int arr[size];
    int sum = 0;

    cout << "\n" << string(50, '=') << endl;
    cout << "              SUM OF ARRAY" << endl;
    cout << string(50, '=') << endl;
    
    cout << "Student: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Department: " << department << endl;
    cout << string(50, '-') << endl;
    
    cout << "Enter " << size << " numbers for the array:" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "\nArray elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i];
        if(i < size - 1) cout << ", ";
    }
    
    cout << "\nSum of all elements: " << sum << endl;

    cout << string(50, '=') << endl;
    cout << "        SUM CALCULATION COMPLETED" << endl;
    cout << string(50, '=') << endl;

    return 0;
}