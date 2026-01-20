#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str; // Note: This only takes input until space

    string reversed = "";
    
    // Manual loop because I didn't know reverse() function back then
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
