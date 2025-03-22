#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b;
cin>>a>>b;

int count=0;
for(int i=0;b>=a;i++){
   b*=2;
   a*=3;
count++;
}
cout<<count;
    return 0;
}