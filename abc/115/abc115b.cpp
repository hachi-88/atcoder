#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p[n];
    for (int i = 0; i < n; i++) cin >> p[i];

    sort(p, p + n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            sum += p[i] / 2;
        } else {
            sum += p[i];
        }
    }

    cout << sum << endl;

    return 0;
}
