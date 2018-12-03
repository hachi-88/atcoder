#include <bits/stdc++.h>
using namespace std;

bool is753(int n) {
    bool c3, c5, c7;
    c3 = c5 = c7 = false;

    do {
        int num = n % 10;
        switch (num) {
            case 3:
                c3 = true;
                break;
            case 5:
                c5 = true;
                break;
            case 7:
                c7 = true;
                break;
            default:
                return false;
        }

    } while (n /= 10);

    return (c3 && c5 && c7);
}

int main() {
    int n;
    cin >> n;

    n = min(n, 777777777);

    int ans = 0;

    for (int i = 357; i <= n; i += 2) {
        if (is753(i)) ans++;
    }

    cout << ans << endl;

    return 0;
}
