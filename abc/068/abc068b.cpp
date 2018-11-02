#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max_divide_count = 0;
    int ans = 1;

    for (int i = 2; i <= n; i++) {
        int count = 0;
        int j = i;

        while (j % 2 == 0) {
            j /= 2;
            count++;
        }

        if (max_divide_count < count) {
            max_divide_count = count;
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}
