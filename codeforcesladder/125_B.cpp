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
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<')
        {
            if (s[i + 1] == '/')
            {
                cnt-=2;
                for (int j = 1; j <= cnt; j++)
                {
                    cout << " ";
                }
                cout << s[i] << s[i + 1] << s[i + 2] << s[i + 3];
                i+=2;
            }
            else
            {
                for (int j = 1; j <= cnt; j++)
                {
                    cout << " ";
                }
                cout << s[i] << s[i + 1] << s[i + 2];
                i+=1;
                cnt+=2;
            }
            nl;
        }
    }
}
int main()
{
    fast;
    solve();
}
