#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n;cin>>n;string s;cin>>s;
int arr[100]={0},cnt=0;
fl(0,s.size()-1){
int a=s[i]-'a';
int b=s[i+1]-'a';
arr[a*10+b]++;
if(arr[a*10+b]==1) cnt++;
}
cout<<cnt;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}