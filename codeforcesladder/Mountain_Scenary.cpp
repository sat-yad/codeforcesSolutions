#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n, k;
	cin >> n >> k;
	int a[2*n + 5];
	for(int i=1; i<=2*n+1; i++){
    cin >> a[i];
    }
	for(int i=2; i<=2*n; i+=2){
		if(k == 0){
        break;
		}
        if(a[i] > a[i-1] + 1 and a[i] > a[i+1] + 1){
			a[i]--;
			k--;
		}
	}
	for(int i=1; i<=2*n+1; i++){
     cout << a[i] << " ";
    }
}
int main(){
    fast;
 solve();
}
