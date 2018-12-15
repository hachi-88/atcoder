#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;


    int i = s.length() - 1;
    int lengthW = 0;

    long ans = 0;

    while (i >= 0) {
        if (s.at(i) != 'B') {
            lengthW++;
        } else {
            ans += lengthW;
        }
        i--;
    }

    cout << ans << endl;

    return 0;
}
