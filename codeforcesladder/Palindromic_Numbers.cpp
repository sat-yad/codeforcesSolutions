#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
       ll n,m;
       cin>>n;
       cin>>m;
       for(int i=pow(10,n-1);i<=pow(10,n)-1;i++){

       }
       int t;
	cin>>t;
	while(t--)
	{
		int n,l=0;
		float z,x,m;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{	
			int j=i+1;
			if(j<n)
			{
				x=max(a[i],a[j]);
				m=min(a[i],a[j]);
				z=x/m;
				while(z>2)
				{
					m=m*2;
					z=x/m;
					l++;
				}
			}
		}
		cout<<l<<"\n";
	}
}

int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}