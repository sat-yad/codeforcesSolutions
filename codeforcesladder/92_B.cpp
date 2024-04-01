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
    int cnt = 0, flag = 0, n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            s.pop_back();
            cnt++;
        }
        else
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (s[j] == '0')
                {
                    s.erase(j,i);
                    s.push_back('1');
                    cnt += i - j;
                    i = j + 1;
                }
                else if (j == 0)
                {
                    cnt += i + 2;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            break;
        }
    }
    cout << cnt;
    nl;
}
int main()
{
    fast;
    solve();
}
