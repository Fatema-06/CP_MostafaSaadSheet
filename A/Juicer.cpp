#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b,d;
    cin>>n>>b>>d;
    int cnt=0, waste=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=b){
        waste+=arr[i];
    }
    if(waste>d){
            cnt++;
            waste=0;
        }
}
    cout<<cnt;
}