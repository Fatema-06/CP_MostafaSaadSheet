#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];
    }

    vector<long long> sorted_v = v;
    sort(sorted_v.begin(), sorted_v.end());
    vector<long long> sorted(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        sorted[i] = sorted[i - 1] + sorted_v[i - 1];
    }

    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            cout << prefix_sum[r] - prefix_sum[l - 1] << "\n";
        } else {
            cout << sorted[r] - sorted[l - 1] << "\n";
        }
    }

    return 0;
}
