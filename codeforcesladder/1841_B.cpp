#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n,a,b=-1,flag=0;cin>>n;string ans;
fl(0,n){
    int x;cin>>x;
    if(i==0) a=x;
    if(x>=b && !flag){b=x;ans+='1';}
    else if(x<=a){
        if(!flag){ans+='1';flag=1;b=x;}
        else if(x>=b){ans+='1';b=x;}
        else ans+='0';
    }
    else ans+='0';
}
cout<<ans<<endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}