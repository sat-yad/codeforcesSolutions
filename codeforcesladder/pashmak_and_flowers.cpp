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
	for(int i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	cout << a[n-1] - a[0] << " "; 
	int countmin = 1, countmax = 1;
	int i=0, j=n-1;
	if(a[n-1] == a[0]){
        cout << 1LL*n*(n-1)/2;
    }
	else{ 
	while(a[i+1] == a[i] and i<n-1) countmin++, i++;
	while(a[j-1] == a[j] and j>0) countmax++, j--;
	cout << countmin * 1LL * countmax;
    }
}

int main(){
    fast;
 solve();
}
