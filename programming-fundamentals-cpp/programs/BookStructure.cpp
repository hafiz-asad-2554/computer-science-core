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

struct Book
{
    string title;
    string author;
    string isbn;
    float price;
    int pages;
};

int main()
{
    Book b;
    
    cout << "========================================" << endl;
    cout << "           Book Information             " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter book title: ";
    getline(cin, b.title);
    cout << "Enter author name: ";
    getline(cin, b.author);
    cout << "Enter ISBN: ";
    getline(cin, b.isbn);
    cout << "Enter price: ";
    cin >> b.price;
    cout << "Enter number of pages: ";
    cin >> b.pages;
    cin.ignore(); // Clear buffer
    
    cout << "\n========================================" << endl;
    cout << "              BOOK INFO                 " << endl;
    cout << "========================================" << endl;
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "ISBN: " << b.isbn << endl;
    cout << "Price: $" << b.price << endl;
    cout << "Pages: " << b.pages << endl;
    cout << "========================================" << endl;
    
    return 0;
}