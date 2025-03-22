#include<bits/stdc++.h>
using namespace std;

int main(){
    string a="qwertyuiopasdfghjkl;zxcvbnm,./";
    char shift;
    cin>>shift;
    int k=0;
    
    if(shift=='R'){
        k=-1;
    }
    else{
        k=1;
    }

    string i;
    cin>>i;

    for(int j=0;j<i.size();j++){
        for(int l=0;l<a.size();l++){
            if(a[l]==i[j]){
                i[j]=a[l+k];
                break;
            }
        }
    }
    
    cout<<i;
    return 0;
}
