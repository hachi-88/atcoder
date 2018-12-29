#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a1[n];
    int a2[n];

    for (int i = 0; i < n; i++) cin >> a1[i];
    for (int i = 0; i < n; i++) cin >> a2[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) sum += a1[j];
        for (int j = i; j < n; j++) sum += a2[j];
        ans = max(ans, sum);
    }

    cout << ans << endl;

    return 0;
}
