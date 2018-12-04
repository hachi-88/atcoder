#include <bits/stdc++.h>
using namespace std;

int keta(long a) {
    int ret = 1;

    while (a /= 10) {
        ret++;
    }

    return ret;
}

int f(long a, long b) {
    return max(keta(a), keta(b));
}

int main() {
    long n;
    cin >> n;

    int ans = 11;
    for (long a = 1; a <= sqrt(n); a++) {
        if (n % a > 0) continue;

        ans = min(ans, f(a, n /a));
    }

    cout << ans << endl;

    return 0;
}
