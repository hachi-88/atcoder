#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, X, Y;
    cin >> n >> m >> X >> Y;

    int x[n], y[m];

    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < m; i++) cin >> y[i];

    sort(x, x + n, greater<int>());
    sort(y, y + m);

    string ans;
    if (x[0] < y[0] && X < y[0] && x[0] < Y) {
        ans = "No War";
    } else {
        ans = "War";
    }

    cout << ans << endl;

    return 0;
}
