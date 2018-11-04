#include <bits/stdc++.h>
using namespace std;

struct city {
    int i;
    int p;
    int y;
    int order_in_pref;
};

bool asc_py(const city& a, const city& b) {
    return a.p == b.p ? a.y < b.y : a.p < b.p;
}

int main() {
    int n, m;
    cin >> n >> m;

    city c[m];
    for (int i = 0; i < m; i++) {
        c[i].i = i;
        cin >> c[i].p >> c[i].y;
    }
    sort(c, c + m, asc_py);

    int before_p = 0;
    int order_in_pref;

    for (int i = 0; i < m; i++) {
        if (before_p != c[i].p) {
            before_p = c[i].p;
            order_in_pref = 1;
        }
        c[i].order_in_pref = order_in_pref++;
    }

    sort(c, c + m, [](city a, city b){ return a.i < b.i; });

    for (int i = 0; i < m; i++) {
        cout << setw(6) << setfill('0') << c[i].p;
        cout << setw(6) << setfill('0') << c[i].order_in_pref << endl;
    }

    return 0;
}
