#include <iostream>
#include <iomanip>
using namespace std;

int memory[50] = {0}; // 0 = Free, >0 = PID

void allocate(int pid, int size) {
    int count = 0;
    int startIdx = -1;
    for(int i=0; i<50; i++) {
        if(memory[i] == 0) {
            if(count == 0) startIdx = i;
            count++;
        } else {
            count = 0;
            startIdx = -1;
        }
        if(count == size) break;
    }
    
    if(count == size) {
        for(int k=0; k<size; k++) memory[startIdx+k] = pid;
        cout << "Allocated process " << pid << endl;
    } else {
        cout << "Not enough memory for " << pid << endl;
    }
}

void showMem() {
    cout << "Memory: ";
    for(int i=0; i<50; i++) cout << (memory[i] == 0 ? "." : to_string(memory[i]));
    cout << endl;
}

int main() {
    allocate(1, 10);
    allocate(2, 5);
    allocate(1, 20); // Fails potentially
    showMem();
    return 0;
}
