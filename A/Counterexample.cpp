#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll l, r;
    cin >> l >> r;
    if (l % 2 == 0 && l + 2 <= r)
        cout << l << " " << l + 1 << " " << l + 2;
    else if (l % 2 == 1 && l + 2 + 1 <= r)
        cout << l + 1 << " " << l + 1 + 1 << " " << l + 2 + 1;
    else
        cout << "-1";
    return 0;
}