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
bool compare(ll x, ll y)
{
    return x > y;
}
void solve()
{
    ll n, k, c = 0;
    cin >> n >> k;
    ll arr[n], brr[n] = {0};
    fl(0, n)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    sort(brr, brr + n);
    sort(brr, brr + n, compare);
    cout << brr[k - 1] << endl;
    for (int i = 0; i < n; i++)
    {
        if (c == k)
            break;
        if (arr[i] >= brr[k - 1])
        {
            c++;
            if (c != k)
                cout << i + 1 << ' ';
            else
                cout << i + 1;
        }
    }
    nl;
}
int main()
{
    fast;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
}
