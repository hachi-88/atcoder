#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if (a.length() > b.length()) {
        cout << "GREATER" << endl;
        return 0;
    }

    if (a.length() < b.length()) {
        cout << "LESS" << endl;
        return 0;
    }

    int cmp = a.compare(b);
    string ans;
    if (cmp == 0) {
        ans = "EQUAL";
    } else if (cmp > 0) {
        ans = "GREATER";
    } else {
        ans = "LESS";
    }

    cout << ans << endl;

    return 0;
}
