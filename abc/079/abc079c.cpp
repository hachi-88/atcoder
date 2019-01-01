#include <bits/stdc++.h>
using namespace std;

int main() {
    char ca, cb, cc, cd;
    cin >> ca >> cb >> cc >> cd;

    int a = ca - '0';
    int b = cb - '0';
    int c = cc - '0';
    int d = cd - '0';

    int op = 0;

    while (1) {
        int ans = a;

        if (op & 0b100) {
            ans += b;
        } else {
            ans -= b;
        }

        if (op & 0b010) {
            ans += c;
        } else {
            ans -= c;
        }

        if (op & 0b001) {
            ans += d;
        } else {
            ans -= d;
        }

        if (ans == 7) {
            cout << a;
            cout << (op & 0b100 ? '+' : '-');
            cout << b;
            cout << (op & 0b010 ? '+' : '-');
            cout << c;
            cout << (op & 0b001 ? '+' : '-');
            cout << d << "=7" << endl;

            return 0;
        }
        op++;
    }

    return 0;
}
