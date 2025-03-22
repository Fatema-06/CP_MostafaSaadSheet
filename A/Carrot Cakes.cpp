#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int t1,t2;
    if(n%k==0){
        t1=(n/k)*t;
    } else{
        t1=n/k;
        t1++;
        t1*=t;
    }
    t2=d+t;
    if(t1<=t2){
        cout<<"NO";
    }else{
        cout<<"YES";
    }

        return 0;
}


/* #include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,t,k,d;
    cin>>n>>t>>k>>d;
    long long x=ceil((double)d/t);
    n=n-(x*k);
    if(n>0){
            if(d%t!=0)
                cout<<"YES"<<endl;
            else{
                if(n>k) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
    }
    else{
        cout<<"NO"<<endl;
    }
} */