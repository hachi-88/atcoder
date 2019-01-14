#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int b[n];

    pair<int, int> p[n];

    long over_total = 0;
    long less_total = 0;
    long less_count = 0;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        cin >> b[i];

        int c = a[i] - b[i];

        p[i] = {c, i};

        if (c < 0) {
            less_total += (-c);
            less_count++;
        } else {
            over_total += c;
        }
    }

    sort(p, p + n, greater<pair<int, int>>());

    if (over_total >= less_total) {
        int ans = less_count;
        int i = 0;
        while (less_total > 0) {
            less_total -= p[i++].first;
            ans++;
        }
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
