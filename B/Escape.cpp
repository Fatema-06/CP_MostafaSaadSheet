#include <bits/stdc++.h>                 
using namespace std;

int main()
{
    double vp,vd,t,f,c,dp,td,tb;
    cin>>vp>>vd>>t>>f>>c;
    dp=t*vp;
    int cnt=0;

    if(vd<=vp){
        cout<<0<<endl;
        return 0;
    }

    while(c>dp){
        td=dp/(vd-vp);
        dp+=td*vp;
        if(dp>=c){
            break;
        }
        cnt++;

        tb=dp/vd+f;
        dp+=tb*vp;
    }
    cout<<cnt;
    return 0;                           
}
