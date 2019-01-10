#include <bits/stdc++.h>
using namespace std;

string deg(int d) {
    d *= 10;
    int n = 36000 / 16;

    string a[16] = {
        "N", "NNE", "NE", "ENE",
        "E", "ESE", "SE", "SSE",
        "S", "SSW", "SW", "WSW",
        "W", "WNW", "NW", "NNW"
    };

    for (int i = 1; i < 16; i++) {
        int nn = n * i - 1125;
        if (nn <= d && d < nn + 2250) {
            return a[i];
        }
    }

    return a[0];
}

int dis(int d) {
    int a[13] = { 0, 3, 16, 34, 55, 80, 108, 139, 172, 208, 245, 285, 327 };

    d = round(d / 6.0);
    for (int i = 0; i < 12; i++) {
        if (a[i] <= d && d < a[i + 1]) {
            return i;
        }
    }

    return 12;
}

int main() {
    int _deg, _dis;
    cin >> _deg >> _dis;

    _dis = dis(_dis);

    cout << (_dis ? deg(_deg) : "C") << " " << _dis << endl;

    return 0;
}
