#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w, x) for (ll i = w; i < x; i++)
#define fast                     \
   ios_base::sync_with_stdio(0); \
   cin.tie(0);                   \
   cin.tie(nullptr);             \
   cout.tie(nullptr);
#define nl cout << "\n";
#define onjudge                                             \
#ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); \
   freopen("./output.txt", "w", stdout);                    \
#endif
void solve()
{
   int n, t, a, b, res = 2;
   cin >> n >> t;
   vector<pair<int, int>> vp;
   fl(0, n)
   {
      cin >> a >> b;
      vp.push_back(make_pair(a, b));
   }
   sort(vp.begin(), vp.end());
   double d;
   fl(1, n)
   {
      d = vp[i].first - vp[i].second / 2.0 - vp[i - 1].second / 2.0 - vp[i - 1].first;
      //    cout<<d;nl;
      if (d == t)
         res += 1;
      else if (d > t)
         res += 2;
   }
   cout << res;
   nl;
}
int main()
{
   fast;
   solve();
}
