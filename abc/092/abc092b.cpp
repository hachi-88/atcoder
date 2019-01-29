#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, x;
    cin >> n >> d >> x;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        for (int j = 0; j * a + 1 <= d; j++) {
            ans++;
        }
    }

    cout << ans + x << endl;

    return 0;
}
