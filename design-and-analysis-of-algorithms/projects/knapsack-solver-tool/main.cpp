#include <iostream>
#include <vector>
using namespace std;

struct Item {
    string name;
    int weight;
    int value;
};

int solveKnapsack(int W, vector<Item>& items) {
    int n = items.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1));

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (items[i - 1].weight <= w)
                dp[i][w] = max(items[i - 1].value + dp[i - 1][w - items[i - 1].weight], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

int main() {
    int W;
    cout << "Enter Knapsack Capacity: ";
    cin >> W;

    int n;
    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> items(n);
    for(int i=0; i<n; i++) {
        cout << "Item " << i+1 << " Name: "; cin >> items[i].name;
        cout << "Weight: "; cin >> items[i].weight;
        cout << "Value: "; cin >> items[i].value;
    }

    cout << "Max Value possible: " << solveKnapsack(W, items) << endl;
    return 0;
}
