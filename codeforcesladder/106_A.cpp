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
    map<char, int> mp;
    mp['6'] = 1;
    mp['7'] = 2;
    mp['8'] = 3;
    mp['9'] = 4;
    mp['T'] = 5;
    mp['J'] = 6;
    mp['Q'] = 7;
    mp['K'] = 8;
    mp['A'] = 9;
    char ch;
    cin >> ch;
    string str1, str2;
    cin >> str1 >> str2;
    if (str1[1] == str2[1])
    {
        if (mp[str1[0]] > mp[str2[0]])
        {
            cout << "YES";
            nl;
        }
        else
        {
            cout << "NO";
            nl;
        }
    }
    else
    {
        if (str1[1] == ch)
        {
            cout << "YES";
            nl;
        }
        else
        {
            cout << "NO";
            nl;
        }
    }
}
int main()
{
    fast;
    solve();
}
