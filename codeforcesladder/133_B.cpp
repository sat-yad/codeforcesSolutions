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
// ">"  →  1000 or 8,
// "<"  →  1001 or 9,
// "+"  →  1010 or 10,
// "-"  →  1011 or 11,
// "."  →  1100 or 12,
// ","  →  1101 or 13,
// "["  →  1110 or 14,
// "]"  →  1111 or 15.
#define N 1000003

void solve()
{
    string s;
    getline(cin, s);
    unordered_map<char, ll> mp;
    ll r = 0, k = 1;
    mp['>'] = 8, mp['<'] = 9, mp['+'] = 10, mp['-'] = 11, mp['.'] = 12,
    mp[','] = 13, mp['['] = 14, mp[']'] = 15;
    for(int i=s.size()-1;i>=0;i--)
    {
        r = (r + mp[s[i]] * k) % N;
        k = (k * 16) % N;
    }
    cout << r;
    nl;
}
int main()
{
    fast;
    solve();
}
