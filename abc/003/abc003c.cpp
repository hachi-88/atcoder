#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int r[n];
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }

    //sort(r, r + n, greater<int>());
    sort(r, r + n);

    double ans = 0.0;
    for (int i = n - k; i < n; i++) {
        ans = (ans + r[i]) / 2.0;
    }

    cout << fixed << ans << endl;

    return 0;
}
