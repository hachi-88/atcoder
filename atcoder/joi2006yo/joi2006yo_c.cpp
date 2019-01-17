#include <bits/stdc++.h>
using namespace std;

// default
// front, right, back, left, top, bottom
int dice[6] = {2, 3, 5, 4, 1, 6};

unordered_map<string, int> m = {
    {"North", 1},
    {"East",  2},
    {"West",  3},
    {"South", 4},
    {"Right", 5},
    {"Left",  6}
};

int f(string dir)
{
    int temp;
    switch (m[dir]) {
        case 1:
            temp = dice[0];
            dice[0] = dice[5];
            dice[5] = dice[2];
            dice[2] = dice[4];
            dice[4] = temp;
            break;
        case 2:
            temp = dice[4];
            dice[4] = dice[3];
            dice[3] = dice[5];
            dice[5] = dice[1];
            dice[1] = temp;
            break;
        case 3:
            temp = dice[4];
            dice[4] = dice[1];
            dice[1] = dice[5];
            dice[5] = dice[3];
            dice[3] = temp;
            break;
        case 4:
            temp = dice[0];
            dice[0] = dice[4];
            dice[4] = dice[2];
            dice[2] = dice[5];
            dice[5] = temp;
            break;
        case 5:
            temp = dice[0];
            dice[0] = dice[1];
            dice[1] = dice[2];
            dice[2] = dice[3];
            dice[3] = temp;
            break;
        case 6:
            temp = dice[0];
            dice[0] = dice[3];
            dice[3] = dice[2];
            dice[2] = dice[1];
            dice[1] = temp;
            break;
    }

    return dice[4];
}

int main()
{
    int n;
    string s;

    cin >> n;

    int ans = 1;
    for (int i = 0; i < n; i++) {
        cin >> s;
        ans += f(s);
    }

    cout << ans << endl;

    return 0;
}
