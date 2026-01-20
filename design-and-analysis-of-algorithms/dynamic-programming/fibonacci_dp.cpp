#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

long long fib(int n) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    return memo[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter n: "; cin >> n;
    memo.resize(n + 1, -1);
    cout << "Fibonacci(" << n << ") = " << fib(n);
    return 0;
}
