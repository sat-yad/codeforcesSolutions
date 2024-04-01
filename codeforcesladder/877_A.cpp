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
// are "Danil", "Olya", "Slava", "Ann" and "Nikita".
void solve()
{
    string s, frn[5] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
    cin >> s;
    int ans = 0;
    fl(0, s.size())
    {
        for (int j = 0; j < 5; j++)
        {
            string a = s.substr(i, frn[j].size());
            if (a == frn[j])
                ans++;
        }
    }
    if (ans == 1)
        cout << "YES";
    else
        cout << "NO";
    nl;
}
int main()
{
    fast;
    solve();
}
