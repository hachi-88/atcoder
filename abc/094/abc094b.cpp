#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    int cost_a = 0, cost_b = 0;

    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;

        if (a < x) {
            cost_a++;
        } else {
            cost_b++;
        }
    }

    cout << min(cost_a, cost_b) << endl;

    return 0;
}
