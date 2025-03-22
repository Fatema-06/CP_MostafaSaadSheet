#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    string s;
    int cnt=0;
    while(n--){
        cin>>s;
        if(s=="Tetrahedron"){
            cnt+=4;
        } else if(s=="Cube"){
            cnt+=6;
        } else if(s=="Octahedron"){
            cnt+=8;
        } else if(s=="Dodecahedron"){
            cnt+=12;
        } else{
            cnt+=20;
        }
    }
    cout<<cnt;
    return 0;
}
