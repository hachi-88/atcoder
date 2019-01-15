#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a, b, ansa, ansb;

    cin >> n;

    ansa = ansb = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        if (a > b) {
            ansa += (a + b);
        } else if (a < b) {
            ansb += (a + b);
        } else {
            ansa += a;
            ansb += b;
        }
    }

    cout << ansa << " " << ansb << endl;

    return 0;
}
