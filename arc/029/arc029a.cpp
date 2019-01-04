#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int t[n];
    for (int i = 0; i < n; i++) cin >> t[i];

    int ans = 1e9;

    // 1つと3つに分けで焼く場合
    for (int i = 0; i < n; i++) {
        int a = t[i];
        int b = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            b += t[j];
        }
        ans = min(ans, max(a, b));
    }

    // 2つと2つに分けて焼く場合
    for (int i = 1; i < n; i++) {
        int a = t[0] + t[i];
        int b = 0;
        for (int j = 1; j < n; j++) {
            if (i == j) continue;
            b += t[j];
        }
        ans = min(ans, max(a, b));
    }

    cout << ans << endl;

    return 0;
}
