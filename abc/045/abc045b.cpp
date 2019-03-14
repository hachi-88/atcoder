#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sa, sb, sc;
    cin >> sa >> sb >> sc;

    int turn = 0;
    while (1) {
        switch (turn) {
            case 0:
                if (sa.length() == 0) {
                    cout << 'A' << endl;
                    return 0;
                }
                turn = sa[0] - 'a';
                sa = sa.substr(1, sa.length() - 1);

                break;
            case 1:
                if (sb.length() == 0) {
                    cout << 'B' << endl;
                    return 0;
                }
                turn = sb[0] - 'a';
                sb = sb.substr(1, sb.length() - 1);

                break;
            case 2:
                if (sc.length() == 0) {
                    cout << 'C' << endl;
                    return 0;
                }
                turn = sc[0] - 'a';
                sc = sc.substr(1, sc.length() - 1);

                break;
        }
    }

    return 0;
}
