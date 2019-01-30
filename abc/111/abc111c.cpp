#include <bits/stdc++.h>
using namespace std;

int main() {
    // TODO: WIP

    unordered_map<int, int> m1;
    unordered_map<int, int> m2;

    int n;
    cin >> n;

    int v[n];

    for (int i = 0; i < n; i++) {
        int _v;
        cin >> _v;

        if (i % 2) {
            if (m1.find(_v) == m1.end()) {
                m1[_v] = 1;
            } else {
                m1[_v]++;
            }
        } else {
            if (m2.find(_v) == m2.end()) {
                m2[_v] = 1;
            } else {
                m2[_v]++;
            }
        }
    }

    vector<pair<int, int>> v1;
    vector<pair<int, int>> v2;
    for (auto m : m1) {
        v1.push_back({m.second, m.first});
    }
    for (auto m : m2) {
        v2.push_back({m.second, m.first});
    }

    sort(v1.begin(), v1.end(), greater<pair<int, int>>());
    sort(v2.begin(), v2.end(), greater<pair<int, int>>());

    int ans = 0;
    if (v1[0].first > v2[0].first) {
        ans += (n / 2 - v1[0].first);
        if (v1[0].second != v2[0].second) {
            ans += (n / 2 - v2[0].first);
        } else {
            if (v2.size() > 1) {
                ans += (n / 2 - v2[1].first);
            } else {
                ans += (n / 2);
            }
        }
    } else if (v1[0].first < v2[0].first) {
        ans += (n / 2 - v2[0].first);
        if (v1[0].second != v2[0].second) {
            ans += (n / 2 - v1[0].first);
        } else {
            if (v1.size() > 1) {
                ans += (n / 2 - v1[1].first);
            } else {
                ans += (n / 2);
            }
        }
    } else {

    }

    cout << ans << endl;

    return 0;
}
