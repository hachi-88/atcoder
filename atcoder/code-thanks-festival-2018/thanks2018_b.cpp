#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    long a1, a2;

    if (x > y) {
        a1 = x;
        a2 = y;
    } else {
        a1 = y;
        a2 = x;
    }

    long b = (a2 / 4) * 4;
    if (b == a2) {
        b -= 4;
    }
    a2 -= b;
    a1 -= b;

    if (a2 * 3 == a1 || (a1 == a2 && a1 % 4 == 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
