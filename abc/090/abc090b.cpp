#include <bits/stdc++.h>
using namespace std;

bool isPalindromicNumber(int n) {
    if ((n / 10000) != (n % 10)) {
        return false;
    }

    n /= 10;
    n -= (n / 1000) * 1000;

    return ((n / 100) == (n % 10));
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = a; i <= b; i++) {
        if (isPalindromicNumber(i)) ans++;
    }

    cout << ans << endl;

    return 0;
}
