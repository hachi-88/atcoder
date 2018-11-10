#include <bits/stdc++.h>
using namespace std;

struct Card {
    string s;

    char mark;
    int number;

    Card() {}
    Card(string _s) {
        s = _s;

        mark = s[0];
        number = s[1] - '0';
    }

    bool operator>(const Card& a) const {
        return number > a.number;
    }
};

int bubbleSort(Card a[], int n) {
    int total_swap = 0;
    int swap_;
    int i = 0;

    do {
        swap_ = 0;

        for (int j = n - 1; j > i; j--) {
            if (a[j -1] > a[j]) {
                swap(a[j -1], a[j]);
                swap_++;
            }
        }

        total_swap += swap_;
        i++;
    } while (swap_ > 0);

    return total_swap;
}

int selectionSort(Card a[], int n) {
    int total_swap = 0;

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) { if (a[min] > a[j]) min = j;
        }

        if (i != min) {
            swap(a[i], a[min]);
            total_swap++;
        }
    }

    return total_swap;
}

bool isStable(Card in[], Card out[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int a = 0; a < n; a++) {
                for (int b = a + 1; b < n; b++) {
                    if (in[i].number == in[j].number && in[i].s == out[b].s && in[j].s == out[a].s) return false;
                }
            }
        }
    }
    return true;
}

void printCard(Card a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << a[i].s;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Card a[n], b[n];

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        a[i] = Card(s);
    }

    for (int i = 0; i < n; i++) b[i] = a[i];
    bubbleSort(b, n);
    printCard(b, n);
    cout << "Stable" << endl;

    for (int i = 0; i < n; i++) b[i] = a[i];
    selectionSort(b, n);
    printCard(b, n);
    cout << (isStable(a, b, n) ? "Stable" : "Not stable") << endl;

    return 0;
}
