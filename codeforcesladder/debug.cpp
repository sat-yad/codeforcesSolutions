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
int arr[n+1];
for (int i = 1; i <= n; i++)
{
    cin>>arr[i];
}
int even=0,odd=0;
for (int i = 1; i <= n; i++)
{
    if(arr[i]%2==0) even++;
    else odd++;
}
if(even<odd){
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]%2==0){
        cout<<i; exit(0);
    }
}
if(even>odd){
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]%2!=0){
        cout<<i; exit(0);}
    }   
}
}
}
int main(){
    fast;
 solve();
}
