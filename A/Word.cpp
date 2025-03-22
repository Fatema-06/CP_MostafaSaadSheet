#include<bits/stdc++.h>
using namespace std;

void Count(string str)
{
    int upper = 0, lower = 0;
    for(int i=0;i<str.size();i++){
        if(str[i]>='A'&& str[i]<='Z'){
            upper++;
        }
        else{
            lower++;
        }
    }

if (upper>lower){
    transform(str.begin(),str.end(),str.begin(),::toupper);
}
else{
    transform(str.begin(),str.end(),str.begin(),::tolower);
}
cout<<str;
}

int main()
{
string s;
cin>>s;
Count(s);
   return 0;
}