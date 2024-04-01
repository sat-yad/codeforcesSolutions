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
    string s;
    int rn;
    cin >> s >> rn;
    if (s == "front")
    {
        if (rn == 1)
        {
            cout << "L";
            nl;
        }
        else
        {
            cout << "R";
            nl;
        }
    }
    else if (s == "back")
    {
        if (rn == 1)
        {
            cout << "R";
            nl;
        }
        else
        {
            cout << "L";
            nl;
        }
    }
}
int main()
{
    fast;
    freopen("./input.txt", "r", stdin); 
    freopen("./output.txt", "w", stdout);
 solve();
}
