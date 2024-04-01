#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve(){
    string n;
    cin>>n;
    ll sum=0,cnt=1;
    for(int i=0;i<n.size();i++){
          sum+=n[i]-48;
    }
    if(n.size()==1 ){
          cnt=0;
    }
    while(sum>9){
        ll s=sum,su=0;
        while(s>0){
            su+=s%10;
            s/=10;
        }
        sum=su;
        cnt++;
    }
    cout<<cnt;nl;
}
int main(){
    fast;
 solve();
}
