#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n;
    cin>>n;
    char s[101];
    priority_queue<int> pq;
    for(int i=0;i<n;i++){ 
        cin>>s[i];
         int m=s[i]-'a'+1;
        pq.push(m);
    }
    cout<<pq.top()<<endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}
    //  for(int j=0;j<str.length();j++){
    //          if(s[i]==str[j]){
    //               maxm=max(maxm,j+1);
    //          }
    //     }