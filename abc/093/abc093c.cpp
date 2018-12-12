#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max_ = max(a, max(b, c));

    int ans = 0;
    ans += (max_ - a) / 2;
    ans += (max_ - b) / 2;
    ans += (max_ - c) / 2;

    int even = max_ % 2;
    int diffNumCount = 0;

    if (a % 2 != even) diffNumCount++;
    if (b % 2 != even) diffNumCount++;
    if (c % 2 != even) diffNumCount++;

    if (diffNumCount == 1) ans += 2;
    if (diffNumCount == 2) ans++;

    cout << ans << endl;

    return 0;
}
