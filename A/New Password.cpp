#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    int n,k;
    cin>>n>>k;
    string s="abcdefghijklmnopqrstuvwxyz";
    string p;
    for(int i=0;i<k;i++){
        p+=s[i];
    }
    int x=n/k;
    string f;
    if(n%k==0){
        for(int i=0;i<x;i++){
            f+=p;
        }
    } else{
        for(int i=0;i<=x;i++){
            f+=p;
        }
        f+=p[0];
    }
    for(int i=0;i<n;i++){
        cout<<f[i];
    }
    return 0;
}


/* #include <iostream>
#include<string>
using namespace std;

int main() {
  
  string s="abcdefghijklmnopqrstuvwxyz";
   string s2="";
   int n,k;
   cin>>n>>k;
  for(int i=0;i<n;i++){
  	s2+=s[i%k];
  }
 
 cout<<s2<<endl;
 	return 0;
} */