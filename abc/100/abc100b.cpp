#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, n;
    cin >> d >> n;

    if (n == 100) {
        n++;
    }

    int a = (d == 0 ? 1 : (d == 1 ? 100 : 10000));

    cout << (n * a) << endl;

    return 0;
}
