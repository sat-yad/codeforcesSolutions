#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int i;
   cin>>i;
     ll a1[i],a2[i],a3[i],a4[4];
    for(int k=0;k<i;k++){
        cin>>a1[k]>>a2[k]>>a3[k]>>a4[k];
    }
    vector<ll >v;
    for(int k=0;k<i;k++){
          vector<ll>temp;
          for(int j=0;j<i;j++){
            if(a1[k]>a1[j] && a2[k]>a2[j] && a3[k]>a3[j] ){
                temp.push_back(j);
            }
          }
          if(temp.size()>)
    }
}
int main(){
    fast;
 solve();
}
