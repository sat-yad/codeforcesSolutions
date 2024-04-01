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
    string str;
    cin >> str;
    string s = "hello";
    int cnt = 0;
    for (int i = 0; i < str.size() && cnt <= 5; i++)
    {
        if (str[i] == s[cnt])
        {
            cnt++;
        }
    }
    if (cnt == 5)
    {
        cout << "YES";nl;
        return;
    }
    cout<<"NO"<<endl;
}
int main()
{
    fast;
    solve();
}
