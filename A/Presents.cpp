#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, p;
    cin>>n;
    vector<int>f(n+1);
    for(int i=1;i<=n;i++){
        cin>>p;
        f[p]=i;
    }
    cout<<f[1];
    for(int i=2;i<=n;i++){
        cout<<" "<<f[i];
    }
    cout<<endl;
    return 0;
}

/* #include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                cout<<j+1<<" ";
            }
        }
    }
    
    return 0;
}
 */