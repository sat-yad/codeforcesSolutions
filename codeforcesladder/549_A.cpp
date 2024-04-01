#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    string face = "acef";
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            string s = "";
            s+=arr[i][j];
            s+=arr[i][j + 1];
            s+=arr[i + 1][j];
            s+=arr[i + 1][j + 1];
            sort(s.begin(),s.end());
            if (s == face)
                ans++;
        }
    }
    cout << ans << endl;
}
int main(){
    fast;
 solve();
}
