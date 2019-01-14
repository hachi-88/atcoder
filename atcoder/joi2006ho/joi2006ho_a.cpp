#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second > b.second);
}

int main()
{
    int n, m;
    cin >> n >> m;

    int a[m] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int k;
            cin >> k;
            if (k) a[j]++;
        }
    }

    pair<int, int> p[m];
    for (int j = 0; j < m; j++) {
        p[j] = {j + 1, a[j]};
    }

    stable_sort(p, p + m, sortbysec);

    for (int j = 0; j < m; j++) {
        cout << p[j].first;
        if (j < m - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
