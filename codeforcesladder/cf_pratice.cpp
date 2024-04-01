#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w, x) for (ll i = w; i < x; i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cin.tie(nullptr);             \
    cout.tie(nullptr);
#define nl cout << "\n";
#define onjudge                                              \
#ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); \
    freopen("./output.txt", "w", stdout);                    \
#endif
const int N=1e3+10;
ll pf[N][N];
ll arr[N][N];
void solve()
{
    // int n,m;cin>>n>>m;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cin>>arr[i][j];
    //         pf[i][j]=arr[i][j]+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
    //     }
    // }
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<m;j++){
    //         cin>>arr[i][j];
    //         pf[i+1][j+1]=pf[i][j+1]+pf[i+1][j]-pf[i][j]+arr[i][j];
    //     }
    // }
    //     int q;
    //     cin >> q;
    //     while (q--)
    //     {
    //         int a, b, c, d;
    //         cin >> a >> b >> c >> d;
    //         cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1];
    //         nl;
    //     }
        ll n;cin>>n;
        ll arr[n]; fl(0,n) cin>>arr[i];
        // ll pf[n+1];pf[0]=arr[0];fl(1,n) pf[i]=pf[i-1]+arr[i];
        // ll br[n];fl(0,n) br[i]=arr[i]*(i+1);
        // ll cr[n+1];cr[0]=br[0];fl(1,n) cr[i]=cr[i-1]+br[i];
        // ll q;cin>>q;
        // while(q--){
        //     ll l,r,d;cin>>l>>r>>d;
        //     cout<<d*(cr[r]-cr[l-1]+(1-l)*(pf[r]-pf[l-1]));
        //     nl;
        // }
    //     ll mx=INT_MIN,mxt=0,
    //     st=0,end=0,s=0;
    // for (ll i=0;i<n;i++){mxt+=arr[i];
    //     if(mx<mxt){mx=mxt;st= s;end=i;}
    //     if (mxt<0){mxt=0;s=i+1;}
    // }
    // cout<<st+1<<" "<<end+1<<" "<<mx;
       vector<int> v(n+1,0);
       int q;cin>>q;
       while(q--){
        int x,d;cin>>x>>d;
            v[n]-=d; v[n-x]+=d;
       }
       int cnt=0;
       fl(0,n){cnt+=v[i];arr[i]+=cnt;}
       fl(0,n) cout<<arr[i]<<" ";
    }
int main()
{
    fast;
    solve();
}
