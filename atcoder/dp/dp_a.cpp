#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cost0 = 0, cost1 = 0;
    int h0 = 0, h1 = 0;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        if (i == 0) {
            cost1 = 0;
            h1 = h;
        } else if (i == 1) {
            cost0 = cost1;
            h0 = h1;

            h1 = h;
            cost1 = abs(h1 - h0);
        } else {
            int cost = min(abs(h - h0) + cost0, abs(h - h1) + cost1);

            cost0 = cost1;
            h0 = h1;

            h1 = h;
            cost1 = cost;
        }
    }

    cout << cost1 << endl;

    return 0;
}
