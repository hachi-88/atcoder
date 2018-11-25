#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    float avg = 0.0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        avg += a[i];
    }
    avg /= n;

    pair<float, int> pa[n];
    for (int i = 0; i < n; i++) {
        pa[i] = make_pair(abs(avg - a[i]), i);
    }

    sort(pa, pa + n);

    cout << pa[0].second << endl;

    return 0;
}
