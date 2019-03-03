#include <bits/stdc++.h>
using namespace std;

int n, m;

int min_checkpoint_no(int aa, int bb, int c[], int d[]) {
    long dist = 10e8 * 4;
    int no;

    for (int i = 0; i < m; i++) {
        long dd = abs(aa - c[i]) + abs(bb - d[i]);
        if (dd < dist) {
            no = i;
            dist = dd;
        }
    }

    return no + 1;
}

int main() {
    cin >> n >> m;

    int a[n], b[n], c[m], d[m];

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> c[i] >> d[i];
    }

    for (int i = 0; i < n; i++) {
        cout << min_checkpoint_no(a[i], b[i], c, d) << endl;
    }

    return 0;
}
