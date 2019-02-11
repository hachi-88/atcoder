#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string s;
    cin >> s;

    string ans = "Yes";
    for (int i = 0; i < a + b + 1; i++) {
        if (i == a && s[i] != '-') {
            ans = "No";
            break;
        } else if (i != a && (s[i] < '0' || '9' < s[i])) {
            ans = "No";
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
