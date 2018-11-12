#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    int ret = 0;

    do {
        ret += n % 10;
    } while ((n /= 10) > 0);

    return ret;
}

int main() {
    int n;
    cin >> n;

    int min = 1000000000;
    for (int i = 1; i <= n / 2; i++) {
        min = std::min(min, f(i) + f(n - i));
    }

    cout << min << endl;

    return 0;
}
