#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s = "123456";
    int mod1 = n % 30;
    for (int i = 0; i < mod1; i++) {
        int mod = i % 5;

        char c = s[mod];
        s[mod] = s[mod + 1];
        s[mod + 1] = c;
    }

    cout << s << endl;

    return 0;
}
