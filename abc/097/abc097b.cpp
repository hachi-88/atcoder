#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    int ans = 1;

    for (int i = 2; i <= 31; i++) {
        int a = i * i;
        while (a <= x) {
            ans = max(ans, a);
            a *= i;
        }
    }

    cout << ans << endl;

    return 0;
}
