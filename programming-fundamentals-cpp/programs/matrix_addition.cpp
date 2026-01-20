#include <iostream>
using namespace std;

int main() {
    int r, c, a[10][10], b[10][10], sum[10][10];

    cout << "Enter number of rows and columns (max 10): ";
    cin >> r >> c;

    cout << "Enter elements of 1st matrix:" << endl;
    for(int i = 0; i < r; ++i)
       for(int j = 0; j < c; ++j) {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    cout << "Enter elements of 2nd matrix:" << endl;
    for(int i = 0; i < r; ++i)
       for(int j = 0; j < c; ++j) {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding two matrices
    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the result
    cout << endl << "Sum of two matrix is: " << endl;
    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j) {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}
