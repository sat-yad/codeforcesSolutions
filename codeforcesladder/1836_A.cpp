#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n,cnt[201];cin>>n;int a[n];
    for (int i=0;i<=200;i++) cnt[i]=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
    for (int i=1;i<=200;i++){
        if (cnt[i]>cnt[i-1]){
            cout<<"No";nl;
            return;
        }
    }
    cout << "Yes";nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}