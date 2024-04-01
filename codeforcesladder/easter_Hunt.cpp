// #include <bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9 + 7;
// void solve(int i,int k,vector<vector<int>>&adj,vector<vector<int>>&dp){
//     dp[i][0] = 1;
//     dp[i][1] = 1;
//     for (int &j:adj[i]){
//         if (j!=k){
//             solve(j,i,adj,dp);
//             dp[i][0]=(dp[i][0]*(dp[j][0]+dp[j][1]))%MOD;
//             dp[i][1]=(dp[i][1]*dp[j][0])%MOD;
//         }
//     }
// }
// int main(){
//     int n,u,v;
//     cin>>n;
//     vector<vector<int>>adj(n + 1);
//     for (int i = 1; i < n; i++){
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<vector<int>> dp(n + 1,vector<int>(2));
//     solve(1,0,adj,dp);
//     int ans=(dp[1][0]+dp[1][1])%MOD;
//     cout<<ans<<endl;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int rec(int i, int prev, const vector<int> &a, const vector<int> &b, int n)
// {
//     if (i == n)
//     {
//         return 1;
//     }

//     int ans = 0;
//     if (i == 0)
//     {
//         ans += rec(i + 1, a[i], a, b, n);

//         ans += rec(i + 1, b[i], a, b, n);
//     }
//     else
//     {
//         if (prev != a[i])
//         {

//             ans += rec(i + 1, a[i], a, b, n);
//         }

//         if (prev != b[i])
//         {

//             ans += rec(i + 1, b[i], a, b, n);
//         }
//     }
//     return ans;
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     vector<int> b(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         cin >> b[i];
//     }

//     cout << rec(0, -1, a, b, n);
// }
// int main()
// {
//     int t = 1;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int rec(int i, int prev, const vector<int> &a, const vector<int> &b, int n, vector<vector<int>> &dp)
{
    if (i == n)
    {
        return 1;
    }

    if (dp[i][prev] != -1)
    {
        return dp[i][prev];
    }

    int ans = 0;
    if (i == 0)
    {
        ans += rec(i + 1, a[i], a, b, n, dp);

        ans += rec(i + 1, b[i], a, b, n, dp);
    }
    else
    {
        if (prev != a[i])
        {

            ans += rec(i + 1, a[i], a, b, n, dp);
        }

        if (prev != b[i])
        {

            ans += rec(i + 1, b[i], a, b, n, dp);
        }
    }

    return dp[i][prev] = ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }

    vector<vector<int>> dp(n, vector<int>(n, -1));
    cout << rec(0, -1, a, b, n, dp);
}
int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
