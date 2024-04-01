#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n,x,y;
cin>>n>>x>>y;
double pup=(double)(y*n)/100;
int pup2=(y*n)/100;
if(pup2>=x){
if(pup-pup2!=0){
    pup2+=1;
}
cout<<pup2-x<<endl;
}

else{
    cout<<0<<endl;
}
}
int main(){
    fast;
 solve();
}
