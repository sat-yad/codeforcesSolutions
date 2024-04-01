#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
	for(int i = n-1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    
	cout << endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}
// int l,r;
// 		cin >> l >> r;
// 		if(2*l > r) cout << -1 << " " << -1 << endl;
// 		else cout << l << " " << 2*l << endl;