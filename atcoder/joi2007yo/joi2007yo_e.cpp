#include <bits/stdc++.h>
using namespace std;

int main()
{
    // WIP
    // WAです

    int A, B, C;
    int N;

    cin >> A >> B >> C >> N;

    int R[A + B + C + 1] = {};

    for (int i = 0; i < N; i++) {
        int a, b, c, r;
        cin >> a >> b >> c >> r;

        if (r == 1) {
            R[a] = 1;
            R[b] = 1;
            R[c] = 1;
        } else {
            if (R[a] == 1 && R[b] == 1) {
                R[c] = 2;
            }
            if (R[b] == 1 && R[c] == 1) {
                R[a] = 2;
            }
            if (R[c] == 1 && R[a] == 1) {
                R[b] = 2;
            }
        }
    }

    for (int i = 0; i < A + B + C; i++) {
        int out = R[i + 1];
        if (out == 2) {
            out = 0;
        } else if (out == 0) {
            out = 2;
        }

        cout << R[i + 1] << endl;
    }

    return 0;
}
