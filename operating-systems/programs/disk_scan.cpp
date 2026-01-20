#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// SCAN (Elevator) Algorithm
void SCAN(int arr[], int head, int size, int disk_size, string direction) {
    int seek_count = 0;
    int cur_track;
    vector<int> left, right;
    vector<int> seek_sequence;

    if (direction == "left") left.push_back(0);
    else if (direction == "right") right.push_back(disk_size - 1);

    for (int i = 0; i < size; i++) {
        if (arr[i] < head) left.push_back(arr[i]);
        if (arr[i] > head) right.push_back(arr[i]);
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    int run = 2;
    while (run--) {
        if (direction == "left") {
            for (int i = left.size() - 1; i >= 0; i--) {
                cur_track = left[i];
                seek_sequence.push_back(cur_track);
                seek_count += abs(cur_track - head);
                head = cur_track;
            }
            direction = "right";
        } else if (direction == "right") {
            for (int i = 0; i < right.size(); i++) {
                cur_track = right[i];
                seek_sequence.push_back(cur_track);
                seek_count += abs(cur_track - head);
                head = cur_track;
            }
            direction = "left";
        }
    }

    cout << "Total number of seek operations = " << seek_count << endl;
}

int main() {
    int arr[] = { 176, 79, 34, 60, 92, 11, 41, 114 };
    int head = 50;
    int disk_size = 200;
    string direction = "left";
    int size = sizeof(arr)/sizeof(arr[0]);
    SCAN(arr, head, size, disk_size, direction);
    return 0;
}
