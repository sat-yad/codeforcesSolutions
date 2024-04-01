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
    int n;
    cin >> n;
    ll arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            if (num == 1 || num == 3)
                c++;
        }
        if (c == 0)
        {
            arr[count] = i + 1;
            count++;
        }
    }
    if (count == 0)
        cout << count << endl;
    else
    {
        cout << count << endl;
        for (int i = 0; i < count; i++)
        {
            cout << arr[i] << " ";
        }
    }   
}
int main()
{
    fast;
    solve();
}
