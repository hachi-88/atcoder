#include <bits/stdc++.h>
using namespace std;

long f(int a[], int n, bool plus) {
    long ans = 0;
    int sum = a[0];

    if (plus && sum <= 0) {
        ans = -sum + 1;
        sum = 1;
    } else if (!plus && sum >= 0) {
        ans = sum + 1;
        sum = -1;
    }

    for (int i = 1; i < n; i++) {
       sum += a[i];

       if ((plus && sum < 0) || (!plus && sum > 0)) {
           plus = !plus;
           continue;
       }

       if (plus) {
           ans += (sum + 1);
           sum = -1;
       } else {
           ans += (-sum + 1);
           sum = 1;
       }
       plus = !plus;
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    long ans1 = f(a, n, true);
    long ans2 = f(a, n, false);

    cout << min(ans1, ans2) << endl;

    return 0;
}
