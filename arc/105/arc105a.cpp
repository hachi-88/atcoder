#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n], y[n];

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int maxlen = 0;
    int a, b, len;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            a = x[i] - x[j];
            b = y[i] - y[j];
            len = a * a + b * b;

            if (len > maxlen) {
                maxlen = len;
            }
        }
    }

    cout << sqrt(maxlen) << endl;

    return 0;
}
