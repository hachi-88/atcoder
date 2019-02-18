#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int l, r;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        ans += r - l + 1;
    }

    cout << ans << endl;

    return 0;
}
