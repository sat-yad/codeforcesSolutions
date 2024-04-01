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
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        int k = 0;
        for (int j = 0; j <= i * 2; j++)
        {
            cout << k;
            if (j < (i * 2))
                cout << " ";
            if (j >= i)
                k--;
            else
                k++;
        }
        nl;
    }

    int m = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        int k = 0;
        for (int j = 0; j < (2 * n - 1 - 2 * i); j++)
        {
            cout << k;
            if (j < (2 * n - 1 - 2 * i) - 1)
                cout << " ";
            if (j >= m)
                k--;
            else
                k++;
        }
        m--;
        nl;
    }
}
int main()
{
    fast;
    solve();
}
