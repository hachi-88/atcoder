#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    char trans[255] = {};

    cin >> n;
    for (int i = 0; i < n; i++) {
        char a, b;
        cin >> a >> b;
        trans[a] = b;
    }

    string ans = "";
    char c;

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> c;
        ans += (trans[c] ? trans[c] : c);
    }
    cout << ans << endl;

    return 0;
}
