#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
vector<int> FindTheSequence(int n) {
        ll p = 1;
        vector<ll> v;
        for (ll i = 1; i < n-1; i++)
        {
            if (__gcd(n, i) == 1)
            {
                v.push_back(i);
                p = (p*i + n)%n;
            }
        }
        if(p != 1 || n==2){
            v.push_back(n-1);
        }
       return v;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}