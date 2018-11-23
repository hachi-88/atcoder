#include <bits/stdc++.h>
using namespace std;

int main() {
    int c11, c12, c13;
    int c21, c22, c23;
    int c31, c32, c33;
    
    cin >> c11 >> c12 >> c13;
    cin >> c21 >> c22 >> c23;
    cin >> c31 >> c32 >> c33;

    int d1 = c11 - c12;
    int d2 = c12 - c13;

    string out;

    if (c21 - c22 == d1 && c22 - c23 == d2 && c31 - c32 == d1 && c32 - c33 == d2) {
        out = "Yes";
    } else {
        out = "No";
    }

    cout << out << endl;

    return 0;
}
