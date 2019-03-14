#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    int sum = 0;

    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        sum += t[i];
    }

    cin >> m;
    int p[m], x[m];
    for (int i = 0; i < m; i++) {
        cin >> p[i] >> x[i];
    }

    for (int i = 0; i < m; i++) {
        cout << sum - (t[p[i] - 1] - x[i]) << endl;
    }

    return 0;
}
