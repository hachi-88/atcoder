#include <bits/stdc++.h>
using namespace std;

void cut(int c[], int n, int k)
{
    int d[n];

    int j = 0;
    for (int i = k; i < n; i++) {
        d[j++] = c[i];
    }

    for (int i = 0; i < k; i++) {
        d[j++] = c[i];
    }

    for (int i = 0; i < n; i++) {
        c[i] = d[i];
    }
}

void shuffle(int c[], int n)
{
    int d[n];

    int j = 0;
    for (int i = 0; i < n / 2; i++) {
        d[j++] = c[i];
        d[j++] = c[i + n / 2];
    }

    for (int i = 0; i < n; i++) {
        c[i] = d[i];
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    n *= 2;

    int c[n];

    for (int i = 0; i < n; i++) c[i] = i + 1;

    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;

        if (k) {
            cut(c, n, k);
        } else {
            shuffle(c, n);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << c[i] << endl;
    }

    return 0;
}
