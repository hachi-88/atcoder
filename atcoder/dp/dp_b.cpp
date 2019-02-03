#include <bits/stdc++.h>
using namespace std;

const long INF = 1LL << 60;

int main() {
    int n, k;
    cin >> n >> k;

    int h[n];
    long cost[n];
    for (int i = 0; i < n; i++) {
        int h_;
        cin >> h_;
        h[i] = h_;
        cost[i] = i ? INF : 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i - k; j < i; j++) {
            if (j < 0) {
                continue;
            }
            cost[i] = min(cost[i], cost[j] + abs(h[i] - h[j]));
        }
    }

    cout << cost[n - 1] << endl;

    return 0;
}
