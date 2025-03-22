#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.length()>10){
            int x=s.length();
            cout<<s[0]<<s.length()-2<<s[x-1]<<endl;
        } else{
            cout<<s<<endl;
        }
    }
    }