#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == t.at(0) && s.substr(i) + s.substr(0, i) == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
