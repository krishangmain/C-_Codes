#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp; // Declare dp as a dynamic 2D vector

int knapsack(int n, int W, int *wt, int *val) {
    if (n == 0 || W == 0) return 0;
    if (dp[n][W] != -1) {
        return dp[n][W];
    }
    int option1 = knapsack(n - 1, W, wt, val);
    int option2 = 0;
    if (W >= wt[n - 1]) {
        option2 = val[n - 1] + knapsack(n - 1, W - wt[n - 1], wt, val);
    }
    return dp[n][W] = max(option1, option2);
}

int main() {
    int n;
    cin >> n;
    vector<int> val(n);
    vector<int> wt(n);
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }
    int W;
    cin >> W;

    // Resize dp vector according to the input values of n and W
    dp.resize(n + 1, vector<int>(W + 1, -1));

    int answer;
    answer = knapsack(n, W, &wt[0], &val[0]);
    cout << answer;

    return 0;
}
