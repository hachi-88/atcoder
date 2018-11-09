#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, s;
    cin >> k >> s;

    int ans = 0;
    for (int x = 0; x <= k; x++) {
        if (x > s) break;

        for (int y = 0; y <= k; y++) {
            if (x + y > s) break;

            int z = s - x - y;
            if (z <= k) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
