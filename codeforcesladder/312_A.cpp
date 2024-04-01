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
// int isSubstring(string s1, string s2)
// {
//     // if (s2.find(s1) !)
//         return s2.find(s1);
//     // return -1;
// }
void solve()
{
    string s, s1 = "lala.", s2 = "miao.";
    getline(cin,s); int l=s.size();int g=0,g2=0;
    // cout<<l;nl;
    // int g=isSubstring(s1,s);
    // cout<<g;nl;
    // int g2=isSubstring(s2,s);
    if(s[0]=='m' && s[1]=='i' && s[2]=='a' && s[3]=='o' && s[4]=='.') g2=1;
    if (s[l-1] == '.' && s[l-2] == 'a' && s[l-3] == 'l' && s[l-4] == 'a' && s[l-5] == 'l') g=1;
        if (g && !g2)
        {
            cout << "Freda's";
        }
        else if (g2 && !g)
            cout << "Rainbow's";
        else
        cout << "OMG>.< I don't know!";
        nl;
}
int main()
{
    fast;
    ll t; 
    cin >> t;
    string s;
    getline(cin, s);
    while (t--)
    {
        solve();
    }
}
