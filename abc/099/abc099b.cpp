#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, ans = 0;
    cin >> a >> b;

    for (int i = 1; i <= (b - a); i++) {
        ans += i;
    }

    ans -= b;

    cout << ans << endl;

    return 0;
}
