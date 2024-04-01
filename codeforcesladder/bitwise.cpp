
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
  int n, b;
  cin >> n >> b;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  unordered_set<int> s;
  for (int i = 0; i < 32; i++)
  {
    if (b & (1 << i) != 0)
    {
      for (int k = 0; k < n; i++)
      {
        if (s.count(k))
          continue;
        if ((a[k] & (1 << i)) == 0)
          s.insert(k);
      }
    }
  }
  int ad = -1;
  for (int i = 0; i < n; i++)
  {
    if (s.count(i) == 0)
    {
      if (ad == -1)
        ad = a[i];
      else
        ad &= a[i];
    }
  }
  cout << (ad == b ? "YES" : "NO") << endl;
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
