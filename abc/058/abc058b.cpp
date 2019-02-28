#include <bits/stdc++.h>
using namespace std;

int main() {
    string o, e;
    cin >> o >> e;

    for (int i = 0; i < o.length(); i++) {
        cout << o[i];
        if (i < e.length()) {
            cout << e[i];
        }
    }

    cout << endl;

    return 0;
}
