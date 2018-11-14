#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    int i;
    for (i = 0; i < n; i++) {
        x -= a[i];
        if (x < 0) {
            break;
        }
    }

    if (i == n && x > 0) i--;

    cout << i << endl;

    return 0;
}
