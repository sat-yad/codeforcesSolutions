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
    ll l=0,r=0,z;
    fl(0, s.size())
    {
        if(s[i]=='^')
              z=i;
        }
    //    lf=s.substr(0,z);
    //    rt=s.substr(z+1);
    //    cout<<lf<<" "<<rt;nl;
       for (ll i = 0; i < s.size(); i++)
       {
        if ('0' <= s[i] && s[i] <= '9')
        {
              if (i < z)
                  l += abs(z - i) * (s[i] - '0');
              else
                  r += abs(z - i) * (s[i] - '0');
        }
       }
    // cout<<l<<" "<<r;nl;
    if (l == r)
    {
        cout << "balance ";
        nl;
    }
    else if (l > r)
    {
        cout << "left";
        nl;
    }
    else{cout<<"right";nl;}
}
int main()
{
    fast;
    solve();
}
