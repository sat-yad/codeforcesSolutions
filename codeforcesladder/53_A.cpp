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
int isss(string s, string t)
{
   if (t.find(s) != string ::npos)
      return t.find(s);
   return -1;
}
void solve()
{
   string s;
   cin >> s;
   int n, c = 0;
   cin >> n;
   vector<string> v;
   while (n--)
   {
      string a;
      cin >> a;
      if (a.size() >= s.size())
      {
         for (int i = 0; i < s.size(); i++)
         {
            if (a[i] == s[i])
               c++;
         }
      }
      if (c == s.size())
         v.push_back(a);
      c = 0;
   }
   sort(v.begin(), v.end());
   if (v.size() == 0)
      cout << s << endl;
   else
      cout << v[0] << endl;
  
}
int main()
{
   fast;
   solve();
}