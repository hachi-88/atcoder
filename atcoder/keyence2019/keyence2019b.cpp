#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s == "keyence") {
        cout << "YES" << endl;
        return 0;
    }

    int n = s.length() - 7;

    for (int i = 0; i < 7; i++) {
        string ss = s.substr(0, i) + s.substr(i + n, s.length() - i);
        if (ss == "keyence") {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
