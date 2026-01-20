#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile;
    myfile.open("example.txt");
    
    if (myfile.is_open()) {
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        myfile << "C++ file handling is easy-ish.\n";
        myfile.close();
        cout << "File written successfully." << endl;
    } else {
        cout << "Unable to open file";
    }
    
    return 0;
}
