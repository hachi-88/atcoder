#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int x;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > k - x) {
            ans += k - x;
        } else {
            ans += x;
        }
    }

    cout << ans * 2 << endl;

    return 0;
}
