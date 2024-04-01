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
void solve()
{
    int n, m;
    cin >> n >> m;
    int cross[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
       cross[i][j]=0;
        }
    }
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c = a[i][j];
            int ok = 1;
            for (int k = 0; k < n; k++)
            {
                if (a[k][j] == c && k != i)
                {
                    ok = 0;
                    break;
                }
            }
            for (int k = 0; k < m; k++)
            {
                if (a[i][k] == c && k != j)
                {
                    ok = 0;
                    break;
                }
            }
            if (!ok)
            {
                cross[i][j] = 1;
            }
        }
    }
//   string s="";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //       cout<<cross[i][j];
    //     }
    //     nl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (cross[i][j]==0)
            {
               cout<<a[i][j];
            }
        }
    }
    nl;
}
int main()
{
    fast;
    solve();
}
