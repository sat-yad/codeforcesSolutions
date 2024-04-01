#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   
	ll ai,ci;
	cin >> ai >> ci;
	vector<ll> a; vector<ll> c;
	while(ai){
		a.push_back(ai%3);
		ai /= 3;
	}
	while(ci){
		c.push_back(ci%3);
		ci /= 3;
	}
	while(a.size() < c.size()){
		a.push_back(0);
	}
	while(c.size() < a.size()){
		c.push_back(0);
	}
	vector<ll> b;
	for(int i=0; i<a.size(); i++){
		ll num = c[i]-a[i];
		if(num < 0) num = 3+num;
		num = num%3;
		b.push_back(num);
	}
	ll p = 1; ll ans = 0;
	for(auto x:b){
		ans += x*p;
		p *= 3;
	}
	cout << ans;
}
int main(){
    fast;
 solve();
}
