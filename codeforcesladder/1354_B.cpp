#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w, x) for (ll i = w; i < x; i++)
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cin.tie(nullptr);             \
  cout.tie(nullptr);
#define nl cout << "\n";
#define onjudge                                            \
#ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); \
  freopen("./output.txt", "w", stdout);                    \
#endif
void solve()
{
  string s;
  cin >> s;
  int mx, mn, x, y, z, ans;
  x = y = z = ans = INT_MAX;
  fl(0, s.size())
  {
    if (s[i] == '1')
      x = i + 1;
    if (s[i] == '2')
      y = i + 1;
    if (s[i] == '3')
      z = i + 1;
    mx = max(x, max(y, z));
    mn = min(x, min(y, z));
    ans = min(ans, mx - mn + 1);
  }
  if (ans > 200000)
    cout << 0;
  else
    cout << ans;
  nl;
}
int main()
{
  fast;
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}