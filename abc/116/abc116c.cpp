#include <bits/stdc++.h>
using namespace std;

int f(int h[], int n)
{
    int ret = 0;
    int divide = 1;
    for (int i = 0; i < n; i++) {
        if (h[i] > 0) {
            h[i]--;
            if (divide) {
                ret++;
                divide = 0;
            }
        } else {
            divide = 1;
        }
    }

    return ret;
}

int main()
{
    int n;
    cin >> n;

    int h[n];
    int min = 0;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int ans = 0;
    while (1) {
        int a = f(h, n);
        ans += a;

        if (a == 0) {
            break;
        }
    };

    cout << ans << endl;

    return 0;
}
