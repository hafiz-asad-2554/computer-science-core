#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeRecord() {
    ofstream file("records.txt", ios::app); // Append mode
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }
    
    int id;
    string data;
    cout << "Enter Record ID: ";
    cin >> id;
    cin.ignore(); // Clear buffer
    cout << "Enter Data String: ";
    getline(cin, data);

    file << id << "," << data << endl;
    file.close();
    cout << "Record saved.\n";
}

void readRecords() {
    ifstream file("records.txt");
    string line;
    
    cout << "\n--- Current Records ---\n";
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "No records found yet.\n";
    }
}

int main() {
    int choice;
    while(true) {
        cout << "\n1. Add Record\n2. View Records\n3. Exit\nChoice: ";
        cin >> choice;
        
        if (choice == 1) writeRecord();
        else if (choice == 2) readRecords();
        else break;
    }
    return 0;
}
