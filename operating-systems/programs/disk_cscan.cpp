#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void CSCAN(int arr[], int head, int size, int disk_size) {
    int seek_count = 0;
    int cur_track;
    vector<int> left, right;
    vector<int> seek_sequence;

    left.push_back(0);
    right.push_back(disk_size - 1);

    for (int i = 0; i < size; i++) {
        if (arr[i] < head) left.push_back(arr[i]);
        if (arr[i] > head) right.push_back(arr[i]);
    }
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    // Right side first
    for (int i = 0; i < right.size(); i++) {
        cur_track = right[i];
        seek_sequence.push_back(cur_track);
        seek_count += abs(cur_track - head);
        head = cur_track;
    }
    head = 0;
    seek_count += (disk_size - 1); // Wrap around

    for (int i = 0; i < left.size(); i++) {
        cur_track = left[i];
        seek_sequence.push_back(cur_track);
        seek_count += abs(cur_track - head);
        head = cur_track;
    }
    cout << "Total number of seek operations = " << seek_count << endl;
}

int main() {
    int arr[] = { 176, 79, 34, 60, 92, 11, 41, 114 };
    int head = 50;
    int disk_size = 200;
    int size = sizeof(arr)/sizeof(arr[0]);
    CSCAN(arr, head, size, disk_size);
    return 0;
}
