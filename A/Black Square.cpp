#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            cnt+=a1;
            //cout<<"s=1"<<"cnt="<<cnt;
        } else if(s[i]=='2'){
            cnt+=a2;
            //cout<<"s=2"<<"cnt="<<cnt;
        } else if(s[i]=='3'){
            cnt+=a3;
            //cout<<"s=3"<<"cnt="<<cnt;
        } else if(s[i]=='4'){
            cnt+=a4;
            //cout<<"s=4"<<"cnt="<<cnt;
        }
    }
    cout<<cnt;
    return 0;
}