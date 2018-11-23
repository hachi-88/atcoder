#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n / 100;
    int b = n - a * 100;

    if (b > a * 10 + a) {
        a++;
    }

    a = a * 100 + a * 10 + a;

    cout << a << endl;

    return 0;
}
