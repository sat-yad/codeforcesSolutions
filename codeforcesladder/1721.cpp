#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int arr[26] = {0};
    for(int i=0;i<2;i++){
        string s1;cin>>s1;
        arr[s1[0]-'a']++;
        arr[s1[1]-'a']++;
    }
    int cnt=0;
    for (int i=0;i<26;i++){
        if(arr[i]!=0) cnt++;
    }
    if (cnt==4) cout<<3;
    else
        cout<<cnt-1;
    nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}