#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a;
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << (odd % 2 ? "NO" : "YES") << endl;

    return 0;
}
