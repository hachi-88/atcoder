#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    int ans = 0;
    for (int i = 1; i < k; i++) {
        ans += ((k - i + 1) / 2);
    }

    cout << ans << endl;

    return 0;
}
