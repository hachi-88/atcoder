#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b;
    int da, db;
    int ans = 1;

    for (int i = 0; i < n; i++) {
        cin >> b;

        if (i == 0) {
            a = b;
            da = 0;
        }

        db = (a == b ? 0 : (a > b ? -1 : 1));

        if ((da > 0 && db < 0) || (da < 0 && db > 0)) {
            ans++;
            da = 0;
        } else if (db != 0) {
            da = db;
        }

        a = b;
    }

    cout << ans << endl;

    return 0;
}
