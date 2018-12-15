#include <bits/stdc++.h>
using namespace std;

int main() {
    int maxA = 100000;
    int n;
    cin >> n;

    int a[maxA] = {};
    int b;
    for (int i = 0; i < n; i++) {
        cin >> b;

        a[b]++;
        if (b - 1 >= 0) a[b - 1]++;
        if (b + 1 < maxA) a[b + 1]++;
    }

    sort(a, a + maxA, greater<int>());

    cout << a[0] << endl;

    return 0;
}
