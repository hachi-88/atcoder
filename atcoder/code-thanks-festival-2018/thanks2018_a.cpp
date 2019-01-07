#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t >> a >> b >> c >> d;

    if (a + c <= t) {
        cout << b + d << endl;
        return 0;
    }

    if (c <= t) {
        cout << d << endl;
        return 0;
    }

    if (a <= t) {
        cout << b << endl;
        return 0;
    }

    cout << 0 << endl;

    return 0;
}
