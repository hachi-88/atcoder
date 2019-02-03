#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int x[m];
    int dx[m - 1];

    for (int i = 0; i < m; i++) cin >> x[i];
    sort(x, x + m);

    for (int i = 0; i < m - 1; i++) {
        dx[i] = abs(x[i + 1] - x[i]);
    }

    /*
    for (int i = 0; i < m; i++) {
        cout << x[i] << endl;
    }
        cout << "---" << endl;
    for (int i = 0; i < m - 1; i++) {
        cout << dx[i] << endl;
    }
    */

    sort(dx, dx + (m - 1), greater<int>());

    int ans = 0;
    for (int i = 0; i < m - 1; i++) {
        if (i < n - 1) {
            continue;
        }
        ans += dx[i];
    }

    cout << ans << endl;

    return 0;
}
