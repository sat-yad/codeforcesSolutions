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
    string s, ans = "";
    cin >> s;
    if (s[0] == 'f')
    {
        ans += s.substr(0,3);
        ans+="://";int ind;
        for (int i = 3; i < s.size(); i++)
        {
            if (s[i] != 'r')
            {
                ans += s[i];
            }
            else
            {
                if (s[i + 1] == 'u' && ans[ans.size() - 1] != '/')
                {

                    if (i + 2 < s.size())
                        ans += ".ru/";
                    else
                        ans += ".ru";
                    i = i + 2;
                    ind=i;
                    break;
                }
                else
                    ans += s[i];
            }
        }
        for (int i=ind; i < s.size(); i++)
        {
            ans += s[i];
        }
    }
    else
    {
        ans += s.substr(0, 4);
        ans += "://";int ind;
        for (int i = 4; i < s.size(); i++)
        {
            if (s[i] != 'r')
            {
                ans += s[i];
            }
            else
            {
                if (s[i + 1] == 'u' && ans[ans.size() - 1] != '/')
                {

                    if (i + 2 < s.size())
                        ans += ".ru/";
                    else
                        ans += ".ru";
                    i = i + 2;
                    ind=i;
                    break;
                }
                else
                    ans += s[i];
            }
        }
        for (int i=ind; i < s.size(); i++)
        {
            ans += s[i];
        }
    }
    cout << ans;
    nl;
}

int main()
{
    fast;
    solve();
}
