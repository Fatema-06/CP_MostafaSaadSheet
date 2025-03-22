#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int police=0,crimes=0;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
           if(police<=0){
                ans++;
            } else{
                police--;
            }
        } else{
            police+=arr[i];
        }
    }
    cout<<ans;
    return 0;
}
