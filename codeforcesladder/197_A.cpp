#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
#define pi 3.14159265359
void solve() {
//   double  a,b,r;cin>>a>>b>>r;
//   double z = min((double)(a) / 2.0, (double)(b) / 2.0) ;
// //   cout<<z;nl;
//   if (r <= z) cout << "First";
//   else cout<<"Second";
int count = 0;
int l, b, r;
cin >> l >> r >> r;
int m = max(l, b);
// if (2 * r > m && 2*r<l)
//   cout << "Second";
// else
// {
  while (m > 2 * r)
  {
    m -= 2 * r;
    count++;
  }
  if (count % 2 == 0)
    cout << "Second";
  else
    cout << "First";
}

int main(){
    fast;
 solve();
}
