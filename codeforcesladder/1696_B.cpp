#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
//  ll n,cnt=0;cin>>n;
//  ll arr[n];vector<ll> j;j.push_back(0);
//  fl(0,n){cin>>arr[i];if(arr[i]==0){j.push_back(i+1);}}
//  for(ll i=0;i<j.size()-1;i++){
//     if((j[i+1]-j[i])>1){cnt++;}
//  }
//  if(j.size()==0){cout<<1;nl;}
//  else  if() {cout<<cnt;nl;}
int n;
cin >> n;

int in = 0;
int c = 0;
vector<int> v(n);
for (int i = 0; i < n; i++)
{
    cin >> v[i];
    if (v[i] != 0 && !in)
    {
        c++;
        in = 1;
    }
    else if (v[i] == 0 && in)
    {
        in = 0;
    }
}

if (c == 1){
    cout << 1 ;nl;}
else if (c > 1){
    cout << 2 ;nl;}
else{
    cout << 0 ;nl;}
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}
