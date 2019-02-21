#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.length() - 2;

    while (len > 1) {
        if (s.substr(0, len / 2) == s.substr(len / 2, len / 2)) {
            cout << len << endl;
            return 0;
        }

        len -= 2;
    }

    return 0;
}
