#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

void calculateDifference(int request[], int head, int diff[][2], int n) {
    for (int i = 0; i < n; i++) {
        diff[i][0] = abs(request[i] - head);
    }
}

int findMin(int diff[][2], int n) {
    int index = -1, min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (!diff[i][1] && min > diff[i][0]) {
            min = diff[i][0];
            index = i;
        }
    }
    return index;
}

void shortestSeekTimeFirst(int request[], int head, int n) {
    int diff[n][2] = { { 0, 0 } };     
    int seek_count = 0; 
    int sequence[n + 1] = {0}; 
    
    for (int i = 0; i < n; i++) {
        sequence[i] = head;
        calculateDifference(request, head, diff, n);
        int index = findMin(diff, n);
        
        diff[index][1] = 1;
        seek_count += diff[index][0]; 
        head = request[index]; 
    }
    sequence[n] = head; 
    cout << "Total number of seek operations = " << seek_count << endl;
}

int main() {
    int proc[] = { 176, 79, 34, 60, 92, 11, 41, 114 };
    int n = sizeof(proc) / sizeof(proc[0]);
    shortestSeekTimeFirst(proc, 50, n); 
    return 0;
}
