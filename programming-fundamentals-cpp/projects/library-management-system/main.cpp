#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};

Book library[100];
int bookCount = 0;

void addBook() {
    cout << "Enter Book ID: ";
    cin >> library[bookCount].id;
    cout << "Enter Title: ";
    cin >> library[bookCount].title;
    cout << "Enter Author: ";
    cin >> library[bookCount].author;
    library[bookCount].isIssued = false;
    bookCount++;
    cout << "Book added!\n";
}

void displayBooks() {
    cout << "\nLibrary Catalog:\n";
    cout << "ID\tTitle\t\tAuthor\t\tStatus\n";
    for(int i=0; i<bookCount; i++) {
        cout << library[i].id << "\t" << library[i].title << "\t\t" << library[i].author << "\t\t" 
             << (library[i].isIssued ? "Issued" : "Available") << endl;
    }
}

void issueBook() {
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;
    for(int i=0; i<bookCount; i++) {
        if(library[i].id == id) {
            if(!library[i].isIssued) {
                library[i].isIssued = true;
                cout << "Book issued successfully!\n";
            } else {
                cout << "Book is already issued.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Book\n2. Display Books\n3. Issue Book\n4. Exit\nChoice: ";
        cin >> choice;
        switch(choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: issueBook(); break;
        }
    } while(choice != 4);
    return 0;
}
