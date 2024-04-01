#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
    string S;
    string s;
     cin>>S;
     cin>>s;
     int ans=0;
     int arr[s.length()];
     for(int i=0;i<s.length();i++){
          arr[i]=S.find(s[i]);
     }
     for(int i=1;i<s.length();i++){
          ans=ans+abs(arr[i]-arr[i-1]);
     }
    cout<<ans<<endl;
}
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
         solve();
    }
}