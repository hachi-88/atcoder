#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s[3];

    for (int i = 0; i < 3; i++) {
        cin >> s[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        char c1, c2, c3;
        c1 = s[0][i];
        c2 = s[1][i];
        c3 = s[2][i];

        if (c1 != c2) {
            ans++;
        }

        if (c1 != c3 && c2 != c3) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
