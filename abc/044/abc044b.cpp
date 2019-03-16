#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt[26] = {};

    for (int i = 0; i < s.length(); i++) {
        cnt[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
