#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t; cin>>t>>n; 
    string str; int cnt=0;
    string s;
    for(int i=0;i<=n;i++){
        s+=to_string(i); 
    } //cout<<s.size();

    while(t--){ 
        cin>>str;
        set<char>unique;
        for(int i=0;i<str.size();i++){
            if (isdigit(str[i]) && (str[i] - '0') <= n) {
            unique.insert(str[i]);
        }
        }
    if(unique.size()>=s.size()){
        cnt++;
    }  //cout<<unique.size();
    }
    cout<<cnt;
   return 0;
}
