#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll a,b;
    cin>>a>>b;
     if (a % b == 0){
        cout<< 0<<endl;
     }
     else if (a > b) {
        cout<<( b - a % b)<<endl;;
    }
    else {
        cout<<(b-a)<<endl;
    }
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}
// int main()
// {
//     int n, k, a[30];
//     bool b[901] = {false};
//     cin >> n >> k;
//     for (int i = 0; i < k; ++i)
//     {
//         cin >> a[i];
//         b[a[i]] = true;
//     }
//     int d = 0;
//     for (int i = 0; i < k; ++i)
//     {
//         cout << a[i];
//         for (int j = 1; j < n; ++j)
//         {
//             ++d;
//             while (b[d])
//             {
//                 ++d;
//             }
//             cout << " " << d;
//         }
//         cout << endl;
//     }
//     return 0;
// }