#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c, k;
    cin >> n >> c >> k;

    int t[n];

    for (int i = 0; i < n; i++) cin >> t[i];

    sort(t, t + n);

    int ans = 0;
    int tt = t[0];
    int bus = 0;
    for (int i = 0; i < n - 1; i++) {
        bus++;

        if (tt + k < t[i + 1] || bus == c) {
            ans++;
            bus = 0;
            tt = t[i + 1];
        }
    }

    ans++;

    cout << ans << endl;

    return 0;
}
