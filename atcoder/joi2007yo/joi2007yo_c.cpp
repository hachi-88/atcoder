#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        c -= 3;
        if (c < 'A') {
            c += 26;
        }

        cout << c;
    }

    cout << endl;

    return 0;
}
