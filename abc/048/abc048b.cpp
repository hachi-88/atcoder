#include <bits/stdc++.h>
using namespace std;

int main() {
    long a, b, x;
    cin >> a >> b >> x;

    long n1 = a / x;
    long n2 = b / x;

    if (a % x == 0) n1--;

    cout << (n2 - n1) << endl;

    return 0;
}
