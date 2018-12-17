#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, bool> a;

    int b, ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> b;

        if (a.find(b) == a.end()) {
            a[b] = false;
        }

        a[b] = !a[b];

        if (a[b]) {
            ans++;
        } else {
            ans--;
        }
    }

    cout << ans << endl;

    return 0;
}
