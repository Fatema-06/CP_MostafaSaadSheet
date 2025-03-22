#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=0;
    vector<int>a(n);
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++){
	if(a[i]>a[0] && a[i]<a[n-1])
    counter++;
    }
	cout<<counter;
    return 0;
}

/* #include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    int cnt=0;
    if(n==0 || n==1 || n==2){
        cout<<"0";
        return 0;
    } else{
        int min=arr[0] , max=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            } else if(arr[i]<min){
                min=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=max && arr[i]!=min){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
} */