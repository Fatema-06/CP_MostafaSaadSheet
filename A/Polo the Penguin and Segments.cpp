#include <iostream>
using namespace std;

int main()
{
    int n, k, l, r, s = 0;
    cin >> n >> k;
    while (n--)
    {
        cin >> l >> r;
        s = (s + r - l + 1) % k;
    }
    cout << (k - s) % k << endl;
    return 0;
}
