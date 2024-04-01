#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
string str;
cin>>str;
bool flag=true;
for(int i=0;i<str.size();i++){
	if(str[i]=='W'&& str[i+1]=='U' && str[i+2]=='B'){
	    i+=2;
	    if(!flag){
	        cout<<" ";
	    }
	}
    else {
	    flag=false;;
	    cout<<str[i];
	    }
	}
}
int main(){
    fast;
 solve();
}
