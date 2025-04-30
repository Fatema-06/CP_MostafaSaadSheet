#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   
   vector<int>arry(n);
   for(int i=0;i<n;i++)
     cin>>arry[i];
     
   int ans=0;
   for(int i=0;i<n;i++){
      int cnt=1;
      int v1=arry[i],v2=arry[i];
      int left=(i==0)?-1:i-1;
      int right=i+1;
      
      while(left>=0 and v1>=arry[left]){
          cnt++;
          v1=arry[left];
          left--;
       }
       while(right<n and v2>=arry[right]){
          cnt++;
          v2=arry[right];
          right++;
       }
      
      ans=max(ans,cnt);
    
   }     
   
   cout<<ans<<endl;
}


int main() {

   int test=1;
   while(test--){
      solve();
   }


}