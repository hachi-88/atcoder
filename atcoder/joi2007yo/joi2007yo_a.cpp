#include <bits/stdc++.h>
using namespace std;

int main()
{
    int in;
    int a = 0 , b = 0;

    for (int i = 0; i < 4; i++) {
        cin >> in;
        a += in;
    }

    for (int i = 0; i < 4; i++) {
        cin >> in;
        b += in;
    }

    cout << max(a, b) << endl;

    return 0;
}
