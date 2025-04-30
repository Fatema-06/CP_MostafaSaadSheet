#include <bits/stdc++.h>
using namespace std;

int main(){
    int w[3]={0, 0, 0}; 

    for(int i=0;i<3;++i){
        string res;
        cin>>res;

        if(res[1]=='>'){
            w[res[0]-'A']++;
        } else{
            w[res[2]-'A']++;
        }
    }

    if(w[0]==w[1] || w[1]==w[2] || w[0]==w[2]){
        cout<<"Impossible"<<endl;
    } else{
        char order[3];
        for(int i=0;i<3;++i){
            order[w[i]]='A'+i;
        }
        cout<<order[0]<<order[1]<<order[2]<<endl;
    }

    return 0;
}
