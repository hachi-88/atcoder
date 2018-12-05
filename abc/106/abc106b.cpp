#include <bits/stdc++.h>
using namespace std;

int yakusuu(int n) {
    int ret = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) ret++;
    }

    return ret * 2;
}

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i += 2) {
        if (yakusuu(i) == 8) ans++;
    }

    cout << ans << endl;

    return 0;
}
