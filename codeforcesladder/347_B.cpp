// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fl(w,x) for(ll i=w;i<x;i++)
// #define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
// #define nl cout<<"\n";
// #define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// void solve() {
//  int n,x,cnt=0,z=0;cin>>n;
//  int arr[n];
//  fl(0,n){ cin>>arr[i]; if(arr[i]==i) cnt++;}
//  fl(0,n){ if(arr[i]!=i){ if(arr[arr[i]]==i){cnt+=2; z=1; break;}}}
//   if(!z && cnt!=n) cnt++;
//  cout<<cnt;nl;

// }
// int main(){
//     fast;
//  solve();
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef vector<int> vi;
typedef vector<ll> vll;
#define nl "\n"
#define F first
#define S second
#define pf pop_back
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(v) v.begin(), v.end()
#define dec(v) v.rbegin(), v.rend()
#define rep(i, n) for (ll i = 0; i < n; i++)
#define decimal(n) fixed << setprecision(n)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cin.tie(nullptr);             \
    cout.tie(nullptr);
void solve()
{
    int c = 0;
    ll n;
    cin >> n;
    int arr[n];
    rep(i, n) cin >> arr[i];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i)
            count++;
        else if (c < 1)
        {
            // swap(arr[i], arr[arr[i]]);
            if (arr[arr[i]] == i)
                {count+=2; c++;
        }
    }
    //   rep(i,n) cout<<arr[i]<<" ";
    if(c!=1 && count!=n) count++;
    cout << count;
}
}
int main()
{

    int t = 1;
    //    cin>>t;
    while (t--)
    {
        solve();
    }
}
