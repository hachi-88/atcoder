#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int p;
    int t1 = 0;
    int t2 = 0;
    int t3 = 0;
    for (int i = 0; i < n; i++) {
        cin >> p;
        if (p <= a) {
            t1++;
        } else if (a < p && p <= b) {
            t2++;
        } else {
            t3++;
        }
    }

    cout << min({t1, t2, t3}) << endl;

    return 0;
}
