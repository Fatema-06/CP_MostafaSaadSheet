#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n,init;
    cin>>n>>init;
    ll dis=0;
    char c;
    ll ice;
    for(int i=0;i<n;i++){
        cin>>c>>ice;
        if(c=='+'){
            init+=ice;
//            cout<<"now"<<init<<endl;
        } else{
            if(init>=ice){
                init-=ice;
//                cout<<"left"<<init<<endl;
            } else{
                dis++;
//                cout<<"Dis"<<dis<<endl;
            }
        }
    }
    cout<<init<<" "<<dis;
    return 0;
}
