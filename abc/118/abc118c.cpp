#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);
    int ans;

    while (1) {
        ans = a[0];
        for (int i = 1; i < n; i++) {
            int mod = a[i] % ans;
            if (mod > 0) {
                a[i] = mod;
            }
        }

        sort(a, a + n);
        if (ans == a[0]) {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
