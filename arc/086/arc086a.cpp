#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> ball;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (ball.find(a) == ball.end()) {
            ball[a] = 1;
        } else {
            ball[a]++;
        }
    }

    int a[ball.size()];
    int i = 0;
    for (auto b : ball) {
        a[i++] = b.second;
    }

    sort(a, a + i);

    int ans = 0;
    int j = 0;
    while (i - j > k) {
        ans += a[j++];
    }

    cout << ans << endl;

    return 0;
}
