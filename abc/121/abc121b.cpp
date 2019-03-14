#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m >> c;

    int a[n][m];
    int b[m];

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int t = c;
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            t += a[i][j] * b[j];
        }

        if (t > 0) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
