#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=(a*b+b*c+c*a)-(a+b+c)+1;
    cout<<ans<<endl;
}

int main(){
    fast;
 solve();
}