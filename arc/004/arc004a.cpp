#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n];
    int y[n];

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int ans = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int a = x[i] - x[j];
            int b = y[i] - y[j];
            ans = max(ans, a * a + b * b);
        }
    }

    cout << sqrt(ans) << endl;

    return 0;
}
