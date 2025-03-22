#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin>>n>>m;
    long long oddCount=(n+1)/2;

    if(m<=oddCount){
        cout<<2*m-1<<endl;
    } else{
        cout<<2*(m-oddCount)<<endl;
    }
    return 0;
}
