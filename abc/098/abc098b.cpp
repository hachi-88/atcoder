#include <bits/stdc++.h>
using namespace std;

int f(unsigned int a, unsigned int b) {
    unsigned int x = a & b;

    int ans = 0;

    for (int i = 0; i < 26; i++) {
        ans += (x & (1 << i) ? 1 : 0);
    }

    return ans;
}

int main() {
    int n;
    string s;
    cin >> n >> s;

    unsigned int x[n] = {};
    unsigned int y[n] = {};

    for (int i = 0; i < n - 1; i++) {
        x[i] |= (1 << (s[i] - 'a'));
        x[i] |= (i > 0 ? x[i - 1] : 0);
    }

    for (int i = n - 2; i >= 0; i--) {
        y[i] |= (1 << (s[i + 1] - 'a'));
        y[i] |= (i < n - 2 ? y[i + 1] : 0);
    }

    // for (int i = 0; i < n; i++) {
    //     cout << "----------------" << endl;
    //     cout << bitset<26>(x[i]) << endl;
    //     cout << bitset<26>(y[i]) << endl;
    // }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, f(x[i], y[i]));
    }

    cout << ans << endl;

    return 0;
}
