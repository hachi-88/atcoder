#include <bits/stdc++.h>
using namespace std;

int h, w;
char c[500][500];
bool checked[500][500] = {};
vector<pair<int, int>> v;
bool goal = false;

bool dfs() {
    if (v.size() == 0) {
        return false;
    }

    auto& p = v.back();
    v.pop_back();

    int _h = p.first;
    int _w = p.second;

    if (_h < 0 || h <= _h || _w < 0 || w <= _w) {
        return true;
    }

    if (checked[_h][_w]) {
        return true;
    }

    if (c[_h][_w] == '#') {
        return true;
    }

    if (c[_h][_w] == 'g') {
        goal = true;
        return false;
    }

    v.push_back({_h, _w - 1});
    v.push_back({_h - 1, _w});
    v.push_back({_h, _w + 1});
    v.push_back({_h + 1, _w});

    checked[_h][_w] = true;

    return true;
}

int main() {
    cin >> h >> w;

    int sh, sw;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> c[i][j];
            if (c[i][j] == 's') {
                sh = i;
                sw = j;
            }
        }
    }

    v.push_back({sh, sw});

    while (dfs()) {
    }

    cout << (goal ? "Yes" : "No") << endl;;

    return 0;
}
