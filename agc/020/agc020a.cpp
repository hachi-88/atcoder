#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    string winner;
    if ((b - a) % 2 == 1) {
        winner = "Borys";
    } else {
        winner = "Alice";
    }

    cout << winner << endl;

    return 0;
}
