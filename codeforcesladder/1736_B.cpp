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
// const int m=2e6+10;
void solve()
{
    int n;
    cin >> n;
    int arr[n], brr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
       if (n == 1)
    {
        cout << "YES";
        nl;
        return;
    }
    brr[0] = arr[0];
    brr[n] = arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        brr[i + 1] = arr[i] * arr[i + 1]/ (__gcd(arr[i], arr[i + 1]));
    }
    // for(int i=1;i<=n+1;i++) cout<<"brr["<<i<<"]="<<brr[i]<<' ';
	// 	cout<<endl;
    for (int i = 0; i < n; i++)
    {
        if ((__gcd(brr[i], brr[i + 1])) != arr[i])
        {
            cout << "NO";
            nl;
            return;
        }
    }
    cout << "YES";
    nl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}