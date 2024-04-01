#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
string s1,s2;
getline(cin,s1);getline(cin,s2);
int f[123]={0};
fl(0,s1.size()) f[s1[i]]++;
bool flag=true;
fl(0,s2.size()){
    if(s2[i]==' ') continue;
    if(f[s2[i]]==0) {  cout<<"NO";nl;flag =false;break;}
    f[s2[i]]--;
}
if(flag){cout<<"YES";nl;}

}
int main(){
    fast;
 solve();
}
