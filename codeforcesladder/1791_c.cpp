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
  int n;
  cin >> n;
  string str;
  cin >> str;
  while (n > 0)
  {
    if ((str[0] == '0' && str[n - 1] == '1') || (str[0] == '1' && str[n - 1] == '0'))
    {
      str = str.substr(1, n - 2);
      n-=2;
    }
    else
    {
      break;
    }
  }
  cout<<n<<endl;
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