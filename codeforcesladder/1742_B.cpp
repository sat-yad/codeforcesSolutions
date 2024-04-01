#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n,cnt=0;cin>>n;
    ll arr[n];
    fl(0,n) cin>>arr[i];
    sort(arr,arr+n);
    fl(0,n-1){ if(arr[i]==arr[i+1]) cnt++; }
    if(cnt==0) cout<<"YES";
    else cout<<"NO";
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
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;cin>>t;
// 	while(t--){
//      int n;cin>>n;
//      for(int i=1;i<=n-1;i+=2) cout<<i<<" ";
//      for(int i=n;i>=2;i-=2) cout<<i<<" ";
//      cout<<endl;
// 	}
// 	return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll int
// int main()
// {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll x, y;
//         cin >> x >> y;
//         if (x == 3 || x == 9)
//         {
//             ll ans = y - x - 3;
//             // cout<<ans<<" "<<(ll)ceil(ans/2)<<endl;
//             cout << (ans+1)/2 + 1 << endl;
//         }
//         else if (x == 5 || x == 7)
//         {
//             ll ans = y - 2 * x;
//             // cout << ans << " " << (ll)ceil(ans / 2) << endl;
//             cout << (ans +1) / 2 + 1 << endl;
//         }
//         else
//         {
//             ll ans = y - x - 2;
//             // cout << ans << " " << (ll)ceil(ans / 2) << endl;
//             cout << (ans+1) / 2 + 1 << endl;
//         }
//     }
//     return 0;
// }
