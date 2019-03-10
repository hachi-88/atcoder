#include <bits/stdc++.h>
using namespace std;

int main() {
    long n, m;
    cin >> n >> m;

    pair<long, long> ab[n];

    for (int i = 0; i < n; i++) {
        cin >> ab[i].first;
        cin >> ab[i].second;
    }

    sort(ab, ab + n);

    long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += min(ab[i].second, m) * ab[i].first;
        m -= ab[i].second;

        if (m <= 0) {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
