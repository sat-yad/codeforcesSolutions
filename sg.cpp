#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
template<typename T = long long int>
T nCr(T n, T k){
if(k>n/2){
k=n-k;
}
T ans=1;
for(T i=0;i<k;++i){
ans=(ans*(n-i))/(i+1);
}
return ans;
}
ll solve(int n,vector<int> a) {
  int m=INT_MIN;
	for(int i=0;i<n;i++){
		m=max(m,a[i]);
	}
	ll ans=0,oddc=0;
	for(int i=0;i<n;i++){
		ans+=abs(a[i]-m)/2;
		oddc+=(abs(a[i]-m)%2);
	}
	if(oddc%2==0){
		return ans+oddc/2;
	}
	return -1;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
  int n;cin>>n;
  vector<int> a;
  for(int i=0;i<n;i++){
    int x;cin>>x;a.push_back(x);
  }
 cout<<solve(n,a);
}
}