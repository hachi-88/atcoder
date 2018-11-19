#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, n;
    cin >> w >> h >> n;

    int x, y, a;
    int w0 = 0, h0 = 0;

    for (int i = 0; i < n; i++) {
        cin >> x >> y >> a;

        switch (a) {
            case 1:
                w0 = max(w0, x);
                break;
            case 2:
                w = min(w, x);
                break;
            case 3:
                h0 = max(h0, y);
                break;
            case 4:
                h = min(h, y);
                break;
        }
    }

    cout << max(0, w - w0) * max(0, h - h0) << endl;

    return 0;
}
