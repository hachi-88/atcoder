#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, a, b;
    cin >> k >> a >> b;

    if (a >= b - 2) {
        cout << k + 1 << endl;
        return 0;
    }

    long ans = 1;
    while (k) {
        if (ans < a) {
            // ビスケットを円に交換できない
            k--;
            ans++;
        } else if (k > 1) {
            // ビスケットを円に交換でき、かつ、あと2回以上操作を行える
            k -= 2;
            ans += (b - a);
        } else {
            // ビスケットを円に交換できるが、操作があと1回しかできない
            ans++;
            k--;
        }
    }

    cout << ans << endl;

    return 0;
}
