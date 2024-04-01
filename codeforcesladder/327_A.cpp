#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n;cin>>n;
int sum=0,cnt=0,x,mx=INT_MIN;
fl(0,n){
    cin>>x;
    if(x==0) cnt++;
    else{
        cnt--;
        sum++;
    }
    if(cnt>mx) mx=cnt;
    if(cnt<0) cnt=0; 
}
cout<<sum+mx<<endl;
}
int main(){
    fast;
 solve();
}
