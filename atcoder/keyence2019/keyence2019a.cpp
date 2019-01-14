#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    bool a[10] = {};
    for (int i = 0; i < 4; i++) {
        cin >> n;
        a[n] = true;
    }

    cout << (a[1] && a[9] && a[7] && a[4] ? "YES" : "NO") << endl;

    return 0;
}
