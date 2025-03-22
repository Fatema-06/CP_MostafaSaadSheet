#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> prog, math, pe;
    vector<int> a(n);

    for(int i=0;i<n;++i){
        cin>>a[i];
        if(a[i]==1) prog.push_back(i+1);
        else if(a[i]==2) math.push_back(i+1);
        else if(a[i]==3) pe.push_back(i+1);  
    }

    int teams=min({prog.size(),math.size(),pe.size()});

    cout<<teams<<endl;

    for(int i=0; i<teams; ++i) {
        cout<<prog[i]<<" "<<math[i]<<" "<<pe[i]<<endl;
    }

    return 0;
}
/* #include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    int programmers[n], mathematicians[n], athletes[n];  

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) {
            programmers[cnt1++] = i + 1;  
        } else if (arr[i] == 2) {
            mathematicians[cnt2++] = i + 1;  
        } else {
            athletes[cnt3++] = i + 1;  
        }
    }

    int m = min({cnt1, cnt2, cnt3});
    cout << m << endl;

    if (m == 0) {
        return 0;
    }

    for (int i = 0; i < m; i++) {
        cout << programmers[i] << " " << mathematicians[i] << " " << athletes[i] << endl;
    }

    return 0;
}
 */