#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve(){
     int n;
   cin>>n;
   vector<string>s(n);
   for(int i=0;i<n;i++){
     cin>>s[i];
   }
   int ans=0;
   for(char a='a';a<='e';a++){
      vector<pair<int,string>>p;
      for(int i=0;i<n;i++){
          string p2=s[i];
          int k1=0;
          int k2=0;
          for(int i=0;i<p2.length();i++){
            if(p2[i]==a){
              k1++;
            }
            else{
              k2++;
            }
          }
          p.push_back(make_pair(k1-k2,p2));
      }
       sort(p.begin(),p.end());
       reverse(p.begin(),p.end());
       int moss=0;
       int num=0;
       for(int i=0;i<p.size();i++){
          moss=moss+p[i].first;
          if(moss<=0){
            break;
          }
          else{
            num++;
          }
       }
       ans=max(ans,num);
   }
   cout<<ans;

}

int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
 cout<<"\n";
}
}