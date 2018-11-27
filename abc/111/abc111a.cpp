#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int i = 1;

    while (int a = n % 10) {
        ans += (a == 1 ? 9 : 1) * i;

        i *= 10;
        n /= 10;
    }

    cout << ans << endl;

    return 0;
}
