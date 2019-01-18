#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n] = {};
    long ans = 0;
    long tmp = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tmp += a[i];

        if (i >= k - 1) {
            if (i - k >= 0) {
                tmp -= a[i - k];
            }
            ans = max(ans, tmp);
        }
    }

    cout << ans << endl;

    return 0;
}
