#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

// Mock Disk
bool diskBlocks[100] = {false}; // false = free
map<string, vector<int>> fileTable;

void createFile(string name, int size) {
    vector<int> blocks;
    int needed = size;
    for(int i=0; i<100 && needed > 0; i++) {
        if(!diskBlocks[i]) {
            diskBlocks[i] = true;
            blocks.push_back(i);
            needed--;
        }
    }
    if(needed == 0) {
        fileTable[name] = blocks;
        cout << "File " << name << " created.\n";
    } else {
        // Rollback
        cout << "Not enough space!\n"; 
        for(int b : blocks) diskBlocks[b] = false;
    }
}

void showMap() {
    cout << "Disk Map (. = free, # = used):\n";
    for(int i=0; i<100; i++) {
        if(i%20==0) cout << endl;
        cout << (diskBlocks[i] ? "#" : ".");
    }
    cout << endl;
}

int main() {
    createFile("a.txt", 10);
    createFile("b.cpp", 5);
    showMap();
    return 0;
}
