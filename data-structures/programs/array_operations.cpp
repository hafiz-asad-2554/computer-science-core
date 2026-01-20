#include <iostream>
using namespace std;

void display(int arr[], int n) {
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    
    // Insertion at index 2
    int pos = 2, val = 10;
    for (int i=n; i>pos; i--) arr[i] = arr[i-1];
    arr[pos] = val;
    n++;
    
    cout << "After Insertion: ";
    display(arr, n);

    // Deletion at index 3
    pos = 3;
    for (int i=pos; i<n-1; i++) arr[i] = arr[i+1];
    n--;

    cout << "After Deletion: ";
    display(arr, n);
    
    return 0;
}
