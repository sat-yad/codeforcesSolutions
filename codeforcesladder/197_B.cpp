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
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n+1], b[m+1];
    fl(0, n+1) cin >> a[i];
    fl(0, m+1) cin >> b[i];
    int g = gcd(a[0], b[0]);
    string str;
     int n1 = abs(a[0] / g);
    int n2 = abs(b[0] / g);
    if((a[0]>0 && b[0]>0)||(a[0]<0 && b[0]<0)) str = to_string(n1) + '/' + to_string(n2);
    else if(a[0]<0 || b[0]<0)
        str = '-'+to_string(n1) + '/' + to_string(n2);
        if (n > m && ((a[0] > 0 && b[0] > 0) || (a[0] < 0 && b[0] < 0)))
            cout << "Infinity";
        else if (n > m && (a[0] < 0 || b[0] < 0))
            cout << "-Infinity";
        else if (n < m)
            cout << "0/1";
        else
            cout << str;
        nl;
}
int main()  
{
    fast;
    solve();
}
