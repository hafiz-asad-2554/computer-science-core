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
    // Display various star patterns with good formatting
    cout << "\n" << string(50, '=') << endl;
    cout << "                STAR PATTERNS" << endl;
    cout << string(50, '=') << endl;

    cout << "\nRight Triangle Pattern:\n" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nSquare Pattern:\n" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nHollow Square Pattern:\n" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << string(50, '=') << endl;
    cout << "         PATTERNS DISPLAY COMPLETE" << endl;
    cout << string(50, '=') << endl;

    return 0;
}