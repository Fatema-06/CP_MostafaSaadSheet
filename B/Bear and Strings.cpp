#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll m=0, n, i, l, j, ans=0;
    string s, s1="bear";
    cin >> s;
    l = s.size();

    for (i = 0; i < l; i++)
    {
        ll cnt = 0, k = 0;
        for (j = i; j < l; j++)
        {
            if (s[j] == s1[0]) cnt = 1;
            else if (s[j] == s1[cnt]) cnt++;
            else cnt = 0;

            if (cnt == 4) k = 1;
            ans += k;
        }
    }

    cout << ans << endl;
}
