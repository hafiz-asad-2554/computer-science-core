#include <iostream>
#include <vector>
#include <thread>
#include <chrono>

#ifdef _WIN32
#include <stdlib.h>
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

using namespace std;

void printArray(const vector<int>& arr) {
    system(CLEAR);
    cout << "Array State:\n";
    for (int val : arr) {
        for(int j=0; j<val; j++) cout << "|"; // Vertical bar graph
        cout << " " << val << endl;
    }
    this_thread::sleep_for(chrono::milliseconds(200));
}

void bubbleSort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                printArray(arr); // Visualize swap
            }
        }
    }
}

int main() {
    vector<int> data = {15, 3, 8, 12, 1, 9, 5, 20, 10, 4};
    char choice;
    cout << "Start Bubble Sort Visualization? (y/n): ";
    cin >> choice;
    if(choice == 'y') bubbleSort(data);
    return 0;
}
