#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w, x) for (ll i = w; i < x; i++)
#define nl cout << "\n";
void solve()
{
    int n, ans = 0;
    cin >> n;
    int x = n - 50;
    if (x > 50)
    {
        if (x % 3 == 1)
        {
            ans = (x + 2) / 3 + 1;
        }
        else if (x % 3 == 2)
        {
            ans = (x + 2) / 3 + 2;
        }
        else if (x % 3 == 0)
        {
            ans = x / 3;
        }
    }
    else
    {
        x = abs(x);
        if (x % 2 == 0)
        {
            ans = x / 2;
        }
        else
        {
            ans = (x + 1) / 2 + 2;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
