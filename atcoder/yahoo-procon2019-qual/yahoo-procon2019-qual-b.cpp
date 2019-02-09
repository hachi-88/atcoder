#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;

    int city[4] = {};

    for (int i = 0; i < 3; i++) {
        cin >> a;
        city[a - 1]++;

        cin >> a;
        city[a - 1]++;
    }

    for (int i = 0; i < 4; i++) {
        if (city[i] > 2) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
