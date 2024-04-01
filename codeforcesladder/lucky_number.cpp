#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n,i;
cin>>n;
// ll d1=7*pow(10,i)+7;
// ll d2=7*pow(10,i)+8;
// ll d3=8*pow(10,i)+7;
// ll d4=8*pow(10,i)+8;
// vector<int >number;
// if(n==1){
//     cout<<2<<endl;
// }
ll sum=0;
for(int i=1;i<=n;i++){
    // number.push_back(d1);
    // number.push_back(d2);
    // number.push_back(d3);
    // number.push_back(d4);
    sum+=pow(2,i);
}
// cout<<number.size()+2<<endl;
cout<<sum<<endl;
}
int main(){
    fast;
 solve();
}
