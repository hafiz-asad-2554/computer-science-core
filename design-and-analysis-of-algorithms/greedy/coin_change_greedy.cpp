#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, target;
    cout << "Enter number of coin types: "; cin >> n;
    vector<int> coins(n);
    cout << "Enter coins: ";
    for(int i=0; i<n; i++) cin >> coins[i];
    cout << "Enter target value: "; cin >> target;

    sort(coins.rbegin(), coins.rend()); // Sort descending

    int count = 0;
    cout << "Coins used: ";
    for(int i=0; i<n; i++) {
        while(target >= coins[i]) {
            target -= coins[i];
            cout << coins[i] << " ";
            count++;
        }
    }
    cout << "\nTotal coins: " << count;
    return 0;
}
