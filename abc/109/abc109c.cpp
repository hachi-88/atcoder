#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int dx[n];
    for (int i = 0; i < n; i++) {
        cin >> dx[i];
        dx[i] = abs(dx[i] - x);
    }

    sort(dx, dx + n);

    int ans;
    int ii = 1;

    while (ans = dx[0] / ii) {
        if (dx[0] % ii) {
            ii++;
            continue;
        }

        bool exit = true;
        for (int i = 1; i < n; i++) {
            if (dx[i] % ans) {
                exit = false;
            }
        }

        if (exit) {
            break;
        }

        ii++;
    }

    cout << ans << endl;

    return 0;
}
