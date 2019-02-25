#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 1; i < s.length(); i++) {
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                cout << "no" << endl;
                return 0;
            }
        }
    }

    cout << "yes" << endl;

    return 0;
}
