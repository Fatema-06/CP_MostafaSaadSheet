#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int Anton=0;
int Danik=0;

 string s;
 cin>>s;

for(int i=0;i<n;i++){
    if(s[i]=='A'){
        Anton+=1;
    }
    else{
        Danik+=1;
    }
}

if(Anton>Danik){
    cout<<"Anton";
}
else if(Danik>Anton){
    cout<<"Danik";
}
else{
    cout<<"Friendship";
}
    return 0;
}