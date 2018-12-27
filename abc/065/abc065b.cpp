#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_map<int, bool> check;

    int current = 1;
    check[1] = true;

    int ans = 0;
    while (1) {
        if (current == 2) {
            cout << ans << endl;
            return 0;
        }

        current = a[current - 1];

        if (check[current]) {
            cout << -1 << endl;
            return 0;
        }

        check[current] = true;
        ans++;
    }

    return 0;
}
