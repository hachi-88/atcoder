#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int r;
    int max = 0;

    for (int i = 0; i < m; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            cin >> r;
            if (r) cnt++;
        }
        max = std::max(cnt, max);
    }

    cout << max << endl;

    return 0;
}
