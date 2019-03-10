#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    int kk = 1;
    for (int i = min(a, b); ; i--) {
        if (a % i == 0 && b % i == 0) {
            if (kk++ == k) {
                cout << i << endl;
                return 0;
            }
        }
    }

    return 0;
}
