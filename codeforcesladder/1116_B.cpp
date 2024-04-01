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
    string t;
    cin >> t;
    string s, s1;
    bool flag = false;
    for (auto i : t)
    {
        s += i;
        if (i != 'a')
            s1 += i;
        if (s.size() + s1.size() == t.size() && s + s1 == t)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << s;

    else
        cout << ":(";
    nl;
}
int main()
{
    fast;
    solve();
}
