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
// string s="HQ9+";
for(int i=0;i<str.length();i++){
    if(str[i]>=33  && str[i]<=126){
     if(str[i]=='H'   || str[i]=='Q'   ||  str[i]=='9'  /*|| str[i]=='+' */){
        cout<<"YES"<<endl;
        return;
     }
    }
}
cout<<"NO"<<endl;
return;
}
int main(){      
    fast;
 solve();
}