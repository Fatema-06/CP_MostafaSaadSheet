#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin>>n;
    string s;
    cin>>s;
    if(n<26){
        cout<<"NO";
    } else{
        set<char> unique_letters;

    for(int i=0;i<n;i++){
        unique_letters.insert(tolower(s[i]));
    }

    if(unique_letters.size()==26){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    }
    return 0;
}

/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin>>len;
    string s;
    set<char>S;
    cin>>s;

    for(int i=0; i<len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A';
            S.insert(s[i]);
    }
    if(S.size()==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
} */