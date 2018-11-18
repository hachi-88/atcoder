#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n + 1];

    for (int i = 1; i <= n; i++) a[i] = 0;

    int ai, bi;
    for (int i = 0; i < m; i++) {
        cin >> ai >> bi;

        a[ai]++;
        a[bi]++;
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << endl;
    };

    return 0;
}
