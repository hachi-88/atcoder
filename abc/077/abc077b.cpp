#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans;
    for (int i = 1; i * i <= n; i++) {
        ans = i * i;
    }

    cout << ans << endl;

    return 0;
}
