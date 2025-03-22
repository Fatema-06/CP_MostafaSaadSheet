#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0 , r=n-1 , s=0 , d=0;
    bool turn =true;
    while(l<=r){
        if(arr[r]>arr[l]){
            if(turn){
                s+=arr[r];
            } else{
                d+=arr[r];
            }
            r--;
        } else{
            if(turn){
                s+=arr[l];
            } else{
                d+=arr[l];
            }
            l++;
        }
        turn=!turn;
    }
cout<<s<<" "<<d;
    return 0;
}
