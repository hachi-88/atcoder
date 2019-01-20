#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;

    unordered_map<int, bool> m;
    m[s] = true;

    int i = 2;
    while (1) {
        if (s % 2) {
            s = 3 * s + 1;
        } else {
            s = s / 2;
        }

        if (m.find(s) == m.end()) {
            m[s] = true;
        } else {
            cout << i << endl;
            return 0;
        }
        i++;
    }

    return 0;
}
