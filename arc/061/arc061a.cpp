#include <bits/stdc++.h>
using namespace std;

long f(string s, int a) {
    long ans = 0;

    int b = (1 << (s.length() - 2));
    int before_i = 0;

    for (int i = 0; i < s.length() - 1; i++) {
        if (a & b) {
            ans += stol(s.substr(before_i, i + 1 - before_i));
            before_i = i + 1;
        }
        b >>= 1;
    }

    ans += stol(s.substr(before_i, s.length() - before_i));

    return ans;
}

int main() {
    string s;
    cin >> s;

    long ans = stol(s);

    for (int i = 1; i < (1 << (s.length() - 1)); i++) {
        ans += f(s, i);
    }

    cout << ans << endl;

    return 0;
}
