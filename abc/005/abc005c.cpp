#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    cin >> t >> n;

    int a[101] = {};
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a[ai]++;
    }

    cin >> m;

    int b[101] = {};
    for (int i = 0; i < m; i++) {
        int bi;
        cin >> bi;
        b[bi]++;
    }

    for (int i = 1; i <= 100 ; i++) {
        while (b[i]--) {
            bool ok = false;
            for (int j = max(1, i - t); j <= i; j++) {
                if (a[j] > 0) {
                    a[j]--;
                    ok = true;
                    break;
                }
            }

            if (!ok) {
                cout << "no" << endl;
                return 0;
            }
        }
    }

    cout << "yes" << endl;

    return 0;
}
