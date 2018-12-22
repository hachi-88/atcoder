#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;

    do {
        if (n % 10 == 2) {
            ans++;
        }
    } while ((n /= 10) > 0);

    cout << ans << endl;

    return 0;
}
