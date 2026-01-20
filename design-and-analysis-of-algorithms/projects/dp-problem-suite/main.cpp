#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lis(vector<int>& arr) {
    int n = arr.size();
    vector<int> lis(n, 1);
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    return *max_element(lis.begin(), lis.end());
}

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;
    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (i - coin >= 0)
                dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
}

int main() {
    int choice;
    cout << "1. LIS\n2. Coin Change\nChoice: ";
    cin >> choice;

    if (choice == 1) {
        vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60, 80};
        cout << "LIS: " << lis(arr) << endl;
    } else if (choice == 2) {
        vector<int> coins = {1, 2, 5};
        int amount = 11;
        cout << "Min coins for " << amount << ": " << coinChange(coins, amount) << endl;
    }
    return 0;
}
