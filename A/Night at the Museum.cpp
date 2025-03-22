#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    char start ='a';
    long long sum=0;
    
    for(int i=0;i<s.size();i++){
        long long l1=abs(s[i]-start);
        long long l2=26-abs(l1);
        sum +=min(l1,l2);
        start=s[i];
    }
    
    cout<<sum<<endl;
}
