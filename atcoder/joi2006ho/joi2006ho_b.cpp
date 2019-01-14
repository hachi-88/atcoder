#include <bits/stdc++.h>
using namespace std;

string f(string s)
{
    string ret = "";
    char c = s[0];
    int a = 1;
    for (int i = 1; i < s.length(); i ++) {
        if (s[i] != c) {
            ret = ret + to_string(a) + c;
            c = s[i];
            a = 1;
        } else {
            a++;
        }
    }

    ret = ret + to_string(a) + c;

    return ret;
}

int main()
{
    int n;
    string s;

    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        s = f(s);
    }

    cout << s << endl;

    return 0;
}
