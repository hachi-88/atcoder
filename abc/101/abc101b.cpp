#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int wa = 0;
    int nn = n;

    do {
        wa += nn % 10;
    } while (nn /= 10);

    cout << (n % wa == 0 ? "Yes" : "No") << endl;

    return 0;
}
