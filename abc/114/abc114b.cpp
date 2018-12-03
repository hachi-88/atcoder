#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 10000;
    for (int i = 0; i + 3 <= s.length(); i++) {
        int k = stoi(s.substr(i, 3));
        ans = min(ans, abs(753 - k));
    }

    cout << ans << endl;

    return 0;
}
