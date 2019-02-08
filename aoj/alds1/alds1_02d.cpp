#include <bits/stdc++.h>
using namespace std;

long insertionSort(int a[], int n, int g)
{
    long cnt = 0;

    for (int i = g; i < n; i++) {
        int v = a[i];
        int j = i - g;
        while (j >= 0 && a[j] > v) {
            a[j + g] = a[j];
            j -= g;
            cnt++;
        }
        a[j + g] = v;
    }

    return cnt;
}

void shellSort(int a[], int n)
{
    vector<int> G;

    int g = 1;
    while (g <= n) {
        G.push_back(g);
        g = 3 * g + 1;
    }

    sort(G.begin(), G.end(), greater<int>());

    long cnt = 0;
    for (auto i : G) {
        cnt += insertionSort(a, n, i);
    }

    cout << G.size() << endl;

    for (int i = 0; i < G.size(); i++) {
        if (i) {
            cout << " ";
        }
        cout << G[i];
    }
    cout << endl;

    cout << cnt << endl;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    shellSort(a, n);

    for (int i = 0; i < n; i++) cout << a[i] << endl;

    return 0;
}
