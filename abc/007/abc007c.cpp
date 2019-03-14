#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int x1, y1, x2, y2;
    cin >> y1 >> x1 >> y2 >> x2;

    string map[r];
    for (int i = 0; i < r; i++) {
        cin >> map[i];
    }

    queue<pair<int, int>> que;
    que.push({x1, y1});

    while (!que.empty()) {
        auto p = que.front();
        que.pop();

    }

    return 0;
}
