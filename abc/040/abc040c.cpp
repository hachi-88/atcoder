#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    long dp[n];
    dp[0] = 0;
    dp[1] = abs(a[0] - a[1]);

    for (int i = 2; i < n; i++) {
        int j = i - 2;
        int k = i - 1;

        dp[i] = min(dp[j] + abs(a[j] - a[i]), dp[k] + abs(a[k] - a[i]));
    }

    cout << dp[n - 1] << endl;

    return 0;
}
