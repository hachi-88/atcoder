#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    string s[h];
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#') {
                continue;
            }

            int ans = 0;
            for (int ii = i - 1; ii < i + 2; ii++) {
                if (ii < 0) {
                    continue;
                }
                if (ii >= h) {
                    break;
                }
                for (int jj = j - 1; jj < j + 2; jj++) {
                    if (jj < 0) {
                        continue;
                    }
                    if (jj >= w) {
                        break;
                    }

                    if (s[ii][jj] == '#') {
                        ans++;
                    }
                }
            }

            s[i][j] = '0' + ans;
        }
    }

    for (int i = 0; i < h; i++) {
        cout << s[i] << endl;
    }

    return 0;
}
