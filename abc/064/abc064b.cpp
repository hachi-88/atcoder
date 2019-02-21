#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min_ = 1000;
    int max_ = 0;
    int a;

    for (int i = 0; i < n; i++) {
        cin >> a;
        min_ = min(a, min_);
        max_ = max(a, max_);
    }

    cout << max_ - min_ << endl;

    return 0;
}
