#include <bits/stdc++.h>
using namespace std;

int main() {
    int d;
    cin >> d;

    string s = "";
    if (d == 25) {
        s = "Christmas";
    }
    if (d == 24) {
        s = "Christmas Eve";
    }
    if (d == 23) {
        s = "Christmas Eve Eve";
    }
    if (d == 22) {
        s = "Christmas Eve Eve Eve";
    }

    cout << s << endl;

    return 0;
}
