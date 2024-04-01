// #include <bits/stdc++.h>
// using namespace std;
// #define mod 1000000007
// void solve() {
//     int n;cin>>n;
//     int a[n],b[n];
//     for(int i=0;i<n;i++) cin>>a[i]>>b[i];
//     vector<vector<int>>dp(n+1,vector<int>(2,0));
//     dp[1][0]=1;
//     dp[1][1]=1;
//     for(int i=2;i<=n;i++){
//         if(a[i-1]!=a[i-2]) (dp[i][0]+=dp[i-1][0]);
//         if(b[i-1]!=b[i-2]) (dp[i][1]+=dp[i-1][1]);
//         if(a[i-1]!=b[i-2]) (dp[i][0]+=dp[i-1][1]);
//         if(b[i-1]!=a[i-2]) (dp[i][1]+=dp[i-1][0]);
//     }
//     cout<<dp[n][0]+dp[n][1];
// }
// int main(){
// solve();
// }
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    ll arr[n], brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] >> brr[i];
    }
    ll dp[n][2];
    dp[0][0] = 1;
    dp[0][1] = 1;
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 0;
        dp[i][1] = 0;
        if (arr[i] != arr[i - 1])
        {
            (dp[i][0] += dp[i - 1][0]) %= mod;
        }
        if (arr[i] != brr[i - 1])
        {
            (dp[i][0] += dp[i - 1][1]) %= mod;
        }
        if (brr[i] != arr[i - 1])
        {
            (dp[i][1] += dp[i - 1][0]) %= mod;
        }
        if (brr[i] != brr[i - 1])
        {
            (dp[i][1] += dp[i - 1][1]) %= mod;
        }
    }
    cout << (dp[n - 1][0] + dp[n - 1][1]) % mod;

    return 0;
}
