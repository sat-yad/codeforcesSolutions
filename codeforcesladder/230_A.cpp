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
bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
  return v1[1] < v2[1];
}
void solve()
{
  int s, n, x, y, flag = 1;
  cin >> s >> n;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; ++i)
  {
    cin >> x >> y;
    v.push_back({x, y});
  }
  sort(v.begin(),v.end());
  for (int i = 0; i < v.size(); ++i)
  {
    if (s > v[i].first)
    {
      s += v[i].second;
      flag = 1;
    }
    else
    {
      flag = 0;
      break;
    }
  }

  if (flag == 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
int main()
{
  fast;
  solve();
}
