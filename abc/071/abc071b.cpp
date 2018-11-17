#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    char before = 'a' - 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == before) continue;

        if (before + 1 != s[i]) {
            before++;
            cout << before << endl;
            return 0;
        }

        before++;
    }

    if (before == 'z') {
        cout << "None";
    } else {
        before++;
        cout << before;
    }

    cout << endl;

    return 0;
}
