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
    int n, k;
    cin >> n >> k;
    // cout << setprecision(9);
    double d = 0;

    int arr[n], brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] >> brr[i];
    }
    fl(0, n - 1)
    {
        int x = arr[i + 1] - arr[i];
        // cout << x;
        int y = brr[i + 1] - brr[i];
        // cout << y;

        d += sqrt(x * x + y * y);
        // cout << d;
    }
    // cout << setprecision(12);
    // cout << fixed << setprecision(9) << d * k / (50);
    printf("%.9lf", d * k / (50));
}
int main()
{
    fast;
    solve();
}
