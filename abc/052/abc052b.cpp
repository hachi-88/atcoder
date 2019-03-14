#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int x = 0;
    int ans = x;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'I') {
            x++;
            ans = max(ans, x);
        } else {
            x--;
        }
    }

    cout << ans << endl;

    return 0;
}
