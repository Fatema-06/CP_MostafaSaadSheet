#include<bits/stdc++.h>
using namespace std;

int countDistinct(string str){
    unordered_set<char> s;
for(int i=0;i<str.size();i++){
    s.insert(str[i]);
}
return s.size();
}

int main()
{
string s;
cin>>s;
if(countDistinct(s)%2==0){
    cout<<"CHAT WITH HER!";
}
else{
    cout<<"IGNORE HIM!";
}
 
       return 0;
}