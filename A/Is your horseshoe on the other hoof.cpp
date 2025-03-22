#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=4;
    int cnt=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
