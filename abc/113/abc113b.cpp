#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, a;
    cin >> n >> t >> a;

    int h[n];
    double tt[n];

    for (int i = 0; i < n; i++) {
        cin >> h[i];
        tt[i] = t - (h[i] * 0.006);
    }

    /*
    for (int i = 0; i < n; i++) {
        cout << tt[i] << endl;
        cout << abs(tt[i] - a) << endl;
    }
    */

    double sub = 1000000.0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (abs(tt[i] - a) < sub) {
            ans = i + 1;
            sub = abs(tt[i] - a);
        }
    }

    cout << ans << endl;

    return 0;
}
