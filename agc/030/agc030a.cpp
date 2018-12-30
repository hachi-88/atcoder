#include <bits/stdc++.h>
using namespace std;

int main() {
    long a, b, c;
    cin >> a >> b >> c;

    long max_c = min(a + b + 1, c);

    cout << b + max_c << endl;

    return 0;
}
