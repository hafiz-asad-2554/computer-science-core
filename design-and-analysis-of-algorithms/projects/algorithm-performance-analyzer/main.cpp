#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace std::chrono;

void bubbleSort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++)    
    for (int j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
}

void selectionSort(vector<int> arr) {
    int n = arr.size();
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}

int main() {
    int n = 5000;
    cout << "Analyzing sorting algorithms for N = " << n << "...\n";
    
    vector<int> data(n);
    for(int i=0; i<n; i++) data[i] = rand() % 10000;
    
    // Bubble Sort
    auto start = high_resolution_clock::now();
    bubbleSort(data);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Bubble Sort: " << duration.count() << " ms\n";
    
    // Selection Sort
    start = high_resolution_clock::now();
    selectionSort(data);
    stop = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(stop - start);
    cout << "Selection Sort: " << duration.count() << " ms\n";
    
    // STL Sort (IntroSort/QuickSort)
    start = high_resolution_clock::now();
    sort(data.begin(), data.end());
    stop = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(stop - start);
    cout << "std::sort (Quick/Intro): " << duration.count() << " ms\n";
    
    return 0;
}
