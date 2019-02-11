#include <bits/stdc++.h>
using namespace std;

int main() {
    long l[87];
    l[0] = 2;
    l[1] = 1;

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        l[i] = l[i - 1] + l[i - 2];
    }

    cout << l[n] << endl;

    return 0;
}
