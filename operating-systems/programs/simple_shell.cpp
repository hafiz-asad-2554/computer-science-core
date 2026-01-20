#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// A very fake shell simulator since we can't actually exec() easily in portable C++ without fork
int main() {
    string input;
    cout << "SimpleShell > ";
    while (getline(cin, input)) {
        if (input == "exit") break;
        
        stringstream ss(input);
        string cmd;
        ss >> cmd;
        
        if (cmd == "ls") {
            cout << "file1.txt  file2.cpp  program.exe\n";
        } else if (cmd == "pwd") {
            cout << "/home/user/simulated_path\n";
        } else {
            cout << "Command not found (Simulator only supports 'ls' and 'pwd')\n";
        }
        cout << "SimpleShell > ";
    }
    return 0;
}
