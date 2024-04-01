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
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    if (s[0] == '0')
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '0')
            {
                swap(s[i], s[0]);
                break;
            }
        }
    }
    if (s == t)
        cout << "OK" << endl;
    else
        cout << "WRONG_ANSWER" << endl;
}
int main()
{
    fast;
    solve();
}
