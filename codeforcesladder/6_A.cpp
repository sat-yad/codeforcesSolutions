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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a + b > c && a + c > b && b + c > a) || (a + b > d && a + d > b && b + d > a) || (a + c > d && a + d > c && c + d > a) || (b + c > d && b + d > c && c + d > b))
    {
        cout << "TRIANGLE" << endl;
    }
    else if (a + b == c || a + c == b || b + c == a || a + b == d || a + d == b || b + d == a || a + c == d || a + d == c || c + d == a || b + c == d || b + d == c || c + d == b)
    {
        cout << "SEGMENT" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}
int main()
{
    fast;
    solve();
}
