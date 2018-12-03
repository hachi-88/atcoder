#include <bits/stdc++.h>
using namespace std;

bool is753(int i) {
    bool c3, c5, c7;
    c3 = c5 = c7 = false;

    do {
        int num = i % 10;
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

    } while (i /= 10);

    return (c3 && c5 && c7);
}

int n;
int ans = 0;

void dfs(long i) {
    if (i > n) return;

    if (is753(i)) ans++;
    dfs(10 * i + 3);
    dfs(10 * i + 5);
    dfs(10 * i + 7);
}

int main() {
    cin >> n;

    dfs(0);

    cout << ans << endl;

    return 0;
}
