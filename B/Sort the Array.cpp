#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l = 0, r = n - 1;

    // Find the first unsorted position from the start
    while (l < n - 1 && a[l] <= a[l + 1]) {
        ++l;
    }

    // If the array is already sorted
    if (l == n - 1) {
        cout << "yes\n1 1" << endl;
        return 0;
    }

    // Find the first unsorted position from the end
    while (r > 0 && a[r] >= a[r - 1]) {
        --r;
    }

    // Reverse the segment
    reverse(a.begin() + l, a.begin() + r + 1);

    // Check if the array is sorted after the reversal
    if (is_sorted(a.begin(), a.end())) {
        cout << "yes\n" << l + 1 << " " << r + 1 << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
