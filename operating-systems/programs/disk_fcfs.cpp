#include <iostream>
#include <cmath>
using namespace std;

void FCFS(int arr[], int head, int size) {
    int seek_count = 0;
    int distance, cur_track;
    for (int i = 0; i < size; i++) {
        cur_track = arr[i];
        distance = abs(cur_track - head);
        seek_count += distance;
        head = cur_track;
    }
    cout << "Total number of seek operations = " << seek_count << endl;
}

int main() {
    int arr[] = { 176, 79, 34, 60, 92, 11, 41, 114 };
    int head = 50;
    int size = sizeof(arr)/sizeof(arr[0]);
    FCFS(arr, head, size);
    return 0;
}
