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
    int bf[n], gf[m], bb[n], gg[m];
    for (int i = 0; i < n; i++)
    {
        bf[i] = i + 1;
        bb[i] = bf[i];
    }
    for (int i = 0; i < m; i++)
    {
        gf[i] = i + 1;
        gg[i] = gf[i];
    }
    int c = n + m - 1;
    cout << c;
    nl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (c)
            {
                if (bb[i] != -1 || gg[j] != -1)
                {
                    cout << bf[i] << " " << gf[j];
                    nl;
                    bb[i] = -1, gg[j] = -1;
                    c--;
                }
                else
                    continue;
            }
            else
                break;
        }
    }
    // for (int i = 1; i < n; i++)
    // {
    //     int j = m - 1;
    //     if (c)
    //     {
    //         if (gf[j] != -1 || bf[i] != -1)
    //         {
    //             cout << bf[i] << " " << gf[j];
    //             nl;
    //             c--;
    //         }
    //         else
    //         {
    //             continue;
    //         }
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
}

int main()
{
    fast;
    solve();
}
