#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    int index=0;
    for(int i=0;i<s2.size();i++){
        if(s1[index]==s2[i]){
            index++;
        } 
    }
    cout<<index+1;
    return 0;
}
