#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    pair<pair<int, int>, int> a[n];
    pair<pair<int, int>, int> b[n];

    for (int i = 0; i < n; i++) {
        int a_, b_;
        cin >> a_ >> b_;

        a[i] = {{a_ + b_, a_}, i};
        b[i] = {{a_ + b_, b_}, i};
    }

    sort(a, a + n, [](pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){ return a.first.first == b.first.first ? (a.first.second > b.first.second) : (a.first.first > b.first.first); });
    sort(b, b + n, [](pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){ return a.first.first == b.first.first ? (a.first.second > b.first.second) : (a.first.first > b.first.first); });

    int idx_a = 0;
    int idx_b = 0;

    long total_a = 0;
    long total_b = 0;

    bool use[n] = {};
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            while (use[a[idx_a].second]) {
                idx_a++;
            }
            use[a[idx_a].second] = true;
            total_a += a[idx_a].first.second;
            idx_a++;
        } else {
            while (use[b[idx_b].second]) {
                idx_b++;
            }
            use[b[idx_b].second] = true;
            total_b += b[idx_b].first.second;
            idx_b++;
        }
    }

    cout << total_a - total_b << endl;

    return 0;
}
