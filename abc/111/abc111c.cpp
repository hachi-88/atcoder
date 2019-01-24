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

    cout << "m1 ------" << endl;
    for (auto m : m1) {
        cout << m.first << " " << m.second << endl;
    }

    cout << "m2 ------" << endl;
    for (auto m : m2) {
        cout << m.first << " " << m.second << endl;
    }

    return 0;
}
