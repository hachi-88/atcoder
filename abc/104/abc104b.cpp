#include <bits/stdc++.h>
using namespace std;

int AC() {
    cout << "AC" << endl;
    return 0;
}

int WA() {
    cout << "WA" << endl;
    return 0;
}

int main() {
    string s;
    cin >> s;

    if (s[0] != 'A') {
        return WA();
    }

    int countC = 0;
    int posC = 0;
    for (int i = 2; i <= s.length() - 2; i++) {
        if (s[i] == 'C') {
            countC++;
            posC = i;
        }
    }

    if (countC != 1) {
        return WA();
    }

    countC = 0;
    for (int i = 1; i <= s.length() - 1; i++) {
        if (i == posC) continue;
        if (!('a' <= s[i] && s[i] <= 'z')) {
            return WA();
        }
    }

    return AC();
}
