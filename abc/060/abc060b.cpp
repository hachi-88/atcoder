#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool mod[100] = {};
    int i = 0;

    while (true) {
        i++;

        int j = i * a - c;
        if (j <= 0) continue;

        if (j % b == 0) {
            cout << "YES" << endl;
            return 0;
        }

        if (mod[j % b]) {
            cout << "NO" << endl;
            return 0;
        }

        mod[j % b] = true;
    }

    return 0;
}
