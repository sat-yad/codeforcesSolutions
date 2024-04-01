#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
    int n;
    cin>>n;
    ll sum=0,sum1=0;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
    // cout<<sum<<endl;
    int j;
    for(int i=0;i<n;i++){
      sum1+=arr[i];
      if(sum1>=(sum+1)/2){
        j=i+1;
        break;
      }
    }
    cout<<j<<endl;
}

int main(){
    fast;
 solve();
}
// 4
// 1 3 2 1
