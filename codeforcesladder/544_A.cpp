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
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.size();
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
    }
    int cnt = 0;
    map<char, int> mp;
    bool flag = 1;
    if (st.size() >= k)
    {
        cout << "YES";
        nl;
        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]] == 0 && flag)
            {
                if (i)
                    nl;
                mp[s[i]]++;
                cnt++;
                if (cnt == k)
                    flag = 0;
            }
            cout << s[i];
        }
    }
    else
    {
        cout << "NO";
        nl;
    }
}
int main()
{
    fast;
    solve();
}
