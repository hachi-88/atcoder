#include <bits/stdc++.h>
using namespace std;

long BMAX = 0;

template<class T>
void combination(const vector<T>& seed, int target_size, bool (*callback)(const vector<T>&)) {
    vector<int> indices(target_size);
    const int seed_size = seed.size();
    int start_index = 0;
    int size = 0;

    while (size >= 0) {
        for (int i = start_index; i < seed_size; ++i) {
            indices[size++] = i;
            if (size == target_size) {
                vector<T> comb(target_size);
                for (int x = 0; x < target_size; ++x) {
                    comb[x] = seed[indices[x]];
                }
                if (callback(comb)) return;
                break;
            }
        }
        --size;
        if (size < 0) break;
        start_index = indices[size] + 1;
    }
}

bool and_beautiful(const vector<long>& comb) {
    int n = comb.size();
    long bmax;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            bmax = comb[i];
        } else {
            bmax &= comb[i];
        }
    }

    if (bmax > BMAX) {
        BMAX = bmax;
    }

    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<long> b(n * (n + 1) / 2);

    int l = 0;
    for (int i = 0; i < n; i++) {
        long beautiful = 0;
        for (int j = i; j < n; j++) {
            beautiful += a[j];
            b[l++] = beautiful;
        }
    }

    //for (int i = 0; i < b.size(); i++) {
    //    cout << b[i] << " ";
    //}
    //cout << endl;

    //sort(b.rbegin(), b.rend());
    //for (int i = 0; i < k; i++) {
    //    if (i == 0) {
    //        BMAX = b[i];
    //    } else {
    //        BMAX &= b[i];
    //    }
    //}

    combination(b, k, and_beautiful);

    cout << BMAX << endl;

    return 0;
}
