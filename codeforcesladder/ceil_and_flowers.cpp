#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
// ll r,g,b;
// cin>>r>>g>>b;
ll arr[3],avg;
cin>>arr[0]>>arr[1]>>arr[2];
sort(arr,arr+3);

avg=(arr[0]+arr[1]+arr[2])/3;
// cout<<avg<<endl;
ll a=arr[1]-arr[0];
ll b=arr[2]-arr[0];
// cout<<arr[1]-arr[0]<<endl;
// cout<<(arr[1]-arr[0])%3<<endl;
// cout<<arr[2]-arr[0]<<endl;
// cout<<(arr[2]-arr[0])%3<<endl;


if((a%3==1 && b%3==2) || (a%3==2 && b%3==1) ||(a%3==2 && b%3==2) && arr[0]==0){
    cout<<avg-1<<endl;
}
else{
    cout<<avg<<endl;
}
// ll min1=min(r,g);
// ll min2=min(min1,b);
// ll count=0;
// r-=min2;
// g-=min2;
// b-=min2;
// cout<<(min2+r/3+g/3+b/3)<<endl;;
// ll rem1,div1,rem2,div2,rem3,div3;
// rem1=r%3;rem2=g%3;rem3=b%3;
// div1=r/3;div2=g/3;div3=b/3;
// ll min1=min(rem)
}
int main(){
    fast;
 solve();
}
