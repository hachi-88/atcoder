#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    string s[h];

    for (int i = 0; i < h; i++) cin >> s[i];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] != '#') {
                continue;
            }

            if (i - 1 >= 0 && s[i - 1][j] == '#') continue;
            if (i + 1 <  h && s[i + 1][j] == '#') continue;
            if (j - 1 >= 0 && s[i][j - 1] == '#') continue;
            if (j + 1 <  w && s[i][j + 1] == '#') continue;

            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
