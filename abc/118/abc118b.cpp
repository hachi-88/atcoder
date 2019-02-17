#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int like_persons[m] = {};

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        if (n == 1) {
            cout << k << endl;
            return 0;
        }

        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            like_persons[--a]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < m; i++) {
        if (like_persons[i] == n) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
