#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int m[n];
    int min = 1000;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> m[i];

        min = std::min(min, m[i]);
        sum += m[i];
    }

    cout << n + ((x - sum) / min) << endl;

    return 0;
}
