#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    int k;

    cin >> a >> b >> c;
    cin >> k;

    int m = max(a, max(b, c));
    int mm = m;

    for (int i = 0; i < k; i++) {
        mm *= 2;
    }

    if (m == a) {
        mm += b;
        mm += c;
    } else if (m == b) {
        mm += a;
        mm += c;
    } else {
        mm += a;
        mm += b;
    }

    cout << mm << endl;

    return 0;
}
