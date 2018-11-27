#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string w, before_w = "";
    map<string, bool> m;

    for (int i = 0; i < n; i++) {
        cin >> w;
        if (m.find(w) != m.end()) {
            cout << "No" << endl;
            return 0;
        }

        if (i > 0 && before_w.back() != w[0]) {
            cout << "No" << endl;
            return 0;

        }

        before_w = w;
        m[w] = true;
    }

    cout << "Yes" << endl;

    return 0;
}
