#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    string s;
    cin>>s;
     ll x=0,y=0,n=s.length();
     ll i,sum=0,a,b;
		map<pair<ll,ll>,bool>vis;
		vis[{0,0}]=1;
		for(i=0;i<n;i++){
            a=x,b=y;
			if(s[i]=='N'){
				y++;
			}
			else if(s[i]=='S'){
				y--;
			}
			else if(s[i]=='W')	{
				x--;
			}
			else if(s[i]=='E')	{
				x++;
			}
			if(!vis[{x+a,y+b}]){
				sum+=5;
               
			}
			else{
				sum++;
			}
            vis[{x+a,y+b}]=1;
		}
		cout<<sum<<endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}