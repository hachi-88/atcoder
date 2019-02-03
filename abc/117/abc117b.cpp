#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int l[n];
    for (int i = 0; i < n; i++) cin >> l[i];

    sort(l, l + n);

    int a = 0;
    for (int i = 0; i < n - 1; i++) a += l[i];

    cout << (a > l[n - 1] ? "Yes" : "No") << endl;

    return 0;
}
