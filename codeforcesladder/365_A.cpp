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
  ll n, k, a, cnt = 0;
  cin >> n >> k;
  fl(0, n)
  {
    string s;
    cin >> s;
    int freq[10] = {0};
    for (char x : s)
    {
      freq[x - '0']++;
    }
    bool flag = true;
    fl(0, k + 1)
    {
      if (freq[i] == 0)
        flag = false;
    }
    if (flag)
      cnt++;
  }
  cout << cnt;
  nl;
}
int main()
{
  fast;
  solve();
}
