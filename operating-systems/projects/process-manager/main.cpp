#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct PCB {
    int pid;
    string state;
};

int main() {
    queue<PCB> readyQueue;
    readyQueue.push({1, "New"});
    readyQueue.push({2, "New"});
    readyQueue.push({3, "New"});
    
    while(!readyQueue.empty()) {
        PCB proc = readyQueue.front();
        readyQueue.pop();
        
        proc.state = "Running";
        cout << "Process " << proc.pid << " is " << proc.state << endl;
        
        // Mock execution
        proc.state = "Terminated";
        cout << "Process " << proc.pid << " is " << proc.state << "\n";
    }
    return 0;
}
