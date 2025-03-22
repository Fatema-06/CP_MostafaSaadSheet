#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,r;
    cin>>k>>r;
    int sum=0;
    int cnt=0;
    while(true){
        sum+=k;
        cnt++;
        if(sum%10==0 || sum%10==r){
            cout<<cnt;
            break;
        }
    }
    return 0;
}
