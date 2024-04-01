// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fl(w,x) for(ll i=w;i<x;i++)
// #define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
// #define nl cout<<"\n";
// #define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// void solve() {
 
  
// }
// int main(){
//     fast;
//  solve();
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef vector<int> vi;
typedef vector<ll> vll;
#define nl cout << endl;
#define F first
#define S second
#define pf pop_back
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(v) v.begin(), v.end()
#define dec(v) v.rbegin(), v.rend()
#define rep(i, n) for (ll i = 0; i < n; i++)
#define decimal(n) fixed << setprecision(n)
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cin.tie(nullptr);             \
  cout.tie(nullptr);

int count_digit(ll n)
{
  int c = 0;
  while (n > 0)
  {
    c++;
    n /= 10;
  }
  return c;
}
string removespace(string s)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == ' ')
    {
      s.erase(s.begin() + i);
      i--;
    }
  }
  return s;
}

void solve()
{
  string a, b;
  getline(cin, a);
  getline(cin, b);
  int count = 0;
  bool flag = true;
  rep(i, b.size())
  {
    rep(j, a.size())
    {
      if (b[i] == a[j])
      {
        a[i] = '-1';
        break;
      }
      else
      {
        flag = false;
      }
    }
    if (flag == false)
    {
      break;
    }
  }
  if (flag == false)
    cout << "NO";
  // cout<<b;
  // rep(i,b.size())
  //{
  // if(b[i]!='1') {cout<<"NO";return;}
  //}
  else
    cout << "YES";
}

int main()
{
  int t = 1;
  //  cin >> t;
  //   string s;getline(cin,s);
  while (t--)
  {
    solve();
  }
}
