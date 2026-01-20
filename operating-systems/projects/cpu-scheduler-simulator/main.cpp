#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Process {
    int pid;
    int bt;
    int wt;
    int tat;
};

void runFCFS(vector<Process> ps) {
    int n = ps.size();
    ps[0].wt = 0;
    
    for(int i = 1; i < n; i++) 
        ps[i].wt = ps[i-1].bt + ps[i-1].wt;
        
    cout << "\n--- FCFS Results ---\n";
    cout << "PID\tBT\tWT\tTAT\n";
    for(int i = 0; i < n; i++) {
        ps[i].tat = ps[i].bt + ps[i].wt;
        cout << ps[i].pid << "\t" << ps[i].bt << "\t" << ps[i].wt << "\t" << ps[i].tat << endl;
    }
}

int main() {
    vector<Process> ps = {{1, 10}, {2, 5}, {3, 8}};
    runFCFS(ps);
    return 0;
}
