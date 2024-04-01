#include <bits/stdc++.h>
using namespace std;
#define ll long long
// # to mysefl;
 //jyada dimaag nhi laagne easy solution find karo hare krishna ;
 ll gcd(int s, int m)
 {
    return m ? gcd(m, s % m) : s;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	ll t;
	cin>>t;
	while(t--){
		long long n;
		long long arr[100000];
		cin>>n;
		for(ll i=1;i<=n;i++){
			cin>>arr[i];
		}
		ll s=arr[1];
		for(ll i=2;i<=n;i++){
			ll m=arr[i];
			s=gcd(s,m);
		}
		ll x=arr[n]/s;
		cout<<x<<endl;
	}
}
