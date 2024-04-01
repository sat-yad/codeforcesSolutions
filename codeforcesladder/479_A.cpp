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
    int a, b, c;
    cin >> a >> b >> c;
    //    sort(arr,arr+3);
    // int m1=arr[0]+arr[1]+arr[2];
    // int m2=(arr[0]+arr[1])*arr[2];
    // int m3=arr[0]*arr[1]*arr[2];
    // -----------------------//
    int m1 = (a + b) * c;
    int m2 = a * (b + c);
    int m3 = a * b * c;
    int m4 = a + b + c;
    int m5 = a * b + c;
    int m6 = a + b * c;
    // cout<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<" "<<m5<<" "<<m6<<endl;
    cout << max(max(m1, m2), max(max(m3, m4), max(m5, m6))) << endl;
}
int main()
{
    fast;
    solve();
}
