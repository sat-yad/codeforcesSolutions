#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int l1,r1,l2,r2,ans=-1;
    cin>>l1>>r1>>l2>>r2;
    if((r1>=l2 && l1<=l2 )|| (l2<l1 && r2>=l1)){
      ans=max(l1,l2);
    }
    else{
       ans=l1+l2;
    }
    cout<<ans<<endl;
    }
   
}
