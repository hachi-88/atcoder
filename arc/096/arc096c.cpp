#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int yen, ans = 2000000000;
    int maxAB = max(x, y) * 2;

    for (int i = 0; i <= maxAB; i++) {
        yen = max(0, x - i / 2) * a + max(0, y - i / 2) * b + i * c;
        ans = min(ans, yen);
    }

    cout << ans << endl;

    return 0;
}
