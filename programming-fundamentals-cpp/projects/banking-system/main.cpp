#include <iostream>
using namespace std;

string accountName = "User";
int pin = 1234;
double balance = 1000.0;

void checkBalance() {
    cout << "Current Balance: $" << balance << endl;
}

void deposit() {
    double amount;
    cout << "Enter amount to deposit: $";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "Deposited successfully!\n";
    } else {
        cout << "Invalid amount.\n";
    }
}

void withdraw() {
    double amount;
    cout << "Enter amount to withdraw: $";
    cin >> amount;
    if (amount > balance) {
        cout << "Insufficient funds!\n";
    } else if (amount <= 0) {
        cout << "Invalid amount.\n";
    } else {
        balance -= amount;
        cout << "Please take your cash.\n";
    }
}

int main() {
    int enteredPin;
    cout << "Welcome to ATM\n";
    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Wrong PIN. Access Denied.\n";
        return 0;
    }

    int choice;
    do {
        cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
        cin >> choice;
        switch(choice) {
            case 1: checkBalance(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: cout << "Thank you for banking with us.\n"; break;
            default: cout << "Invalid option.\n";
        }
    } while(choice != 4);

    return 0;
}
