#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n >> s;

    int turn_to_e[n] = {};
    int turn_to_w[n] = {};

    for (int i = 1; i < n; i++) {
        turn_to_e[i] = turn_to_e[i - 1] + (s[i - 1] == 'W' ? 1 : 0);
    }

    for (int i = n - 2; i >= 0; i--) {
        turn_to_w[i] = turn_to_w[i + 1] + (s[i + 1] == 'E' ? 1 : 0);
    }

    int ans = 300000;
    for (int i = 0; i < n; i++) {
        ans = min(ans, turn_to_e[i] + turn_to_w[i]);
    }

    cout << ans << endl;

    return 0;
}
