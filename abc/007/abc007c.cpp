#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int x1, y1, x2, y2;
    cin >> y1 >> x1 >> y2 >> x2;

    x1--;
    y1--;
    x2--;
    y2--;

    string map[r];
    for (int i = 0; i < r; i++) {
        cin >> map[i];
    }

    int dist[r][c] = {};
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, -1, 0, 1};

    queue<pair<int, int>> que;
    que.push({y1, x1});

    while (!que.empty()) {
        auto p = que.front();
        que.pop();

        int d = dist[p.first][p.second];

        for (int i = 0; i < 4; i++) {
            int y = p.first + dy[i];
            int x = p.second + dx[i];

            if (0 <= x && x < c && 0 <= y && y < r && map[y][x] == '.' && dist[y][x] == 0) {
                dist[y][x] = d + 1;
                que.push({y, x});
            }

            if (x == x2 && y == y2) {
                cout << d + 1 << endl;
                return 0;
            }
        }
    }

    return 0;
}
