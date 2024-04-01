#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    string s;cin>>s;
	for(int i=0;s[i]!='\0';i++){
		if (s[i]>='5'&&s[i]<='9'){
			if(i==0&&s[i]=='9')	continue;
			s[i]='0'+'9'-s[i];
		}
	}
	cout<<s;nl;
}
int main(){
    fast;
 solve();
}
