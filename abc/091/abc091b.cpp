#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    unordered_map<string, int> cards;

    string s;

    // blue
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (cards.find(s) == cards.end()) {
            cards[s] = 1;
        } else {
            cards[s]++;
        }
    }

    // red
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> s;
        if (cards.find(s) == cards.end()) {
            cards[s] = -1;
        } else {
            cards[s]--;
        }
    }

    int max = 0;
    for (auto card : cards) {
        max = std::max(max, card.second);
    }

    cout << max << endl;

    return 0;
}
