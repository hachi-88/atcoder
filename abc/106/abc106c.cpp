#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    long k;

    cin >> s >> k;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '1' && i + 1 <= k) {
            cout << s[i] << endl;
            return 0;
        }
    }

    cout << 1 << endl;

    return 0;
}
