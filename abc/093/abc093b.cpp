#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    int i;
    for (i = a; i <= b; i++) {
        if (i >= a + k) {
            break;
        }
        cout << i << endl;
    }

    for (i = max(i, b - k + 1); i <= b; i++) {
        cout << i << endl;
    }

    return 0;
}
