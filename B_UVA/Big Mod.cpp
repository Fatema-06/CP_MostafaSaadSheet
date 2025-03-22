#include <bits/stdc++.h>
using namespace std;

int main() {
    int b, p, m, ans;

    while (cin >> b >> p >> m) {
        ans = 1;
        b %= m;

        while (p) {
            if (p & 1)
                ans = (ans * b) % m;
            b = (b * b) % m;
            p >>= 1;
        }

        cout << ans << endl;
    }

    return 0;
}
