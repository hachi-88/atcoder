#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, y, h;
    pair<int, pair<int, int>> p[n];

    for (int i = 0; i < n; i++) {
        cin >> x >> y >> h;
        p[i] = {h, {x, y}};
    }

    sort(p, p + n, [](pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) { return a.first > b.first; });
    int h0 = p[0].first;
    int x0 = p[0].second.first;
    int y0 = p[0].second.second;

    int ansx, ansy, ansh = -1;

    for (int cy = 0; cy <= 100; cy++) {
        for (int cx = 0; cx <= 100; cx++) {
            int ch = h0 + abs(cy - y0) + abs(cx - x0);
            bool ok = true;
            for (auto pp : p) {
                if (pp.first != max(ch - abs(cy - pp.second.second) - abs(cx - pp.second.first), 0)) {
                    ok = false;
                    break;
                }
            }

            if (ok && ch > ansh) {
                ansh = ch;
                ansx = cx;
                ansy = cy;
            }
        }
    }

    cout << ansx << " " << ansy << " " << ansh << endl;

    return 0;
}
