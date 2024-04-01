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
int dis(int x1, int y1, int x2, int y2)
{
    return (pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
bool is_right(int l1, int l2, int l3)
{
    if ((l1 + l2) == l3)
    {
        return true;
        ;
    }
    return false;
    ;
}
void solve()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int arr[3];
    int l1 = dis(x1, y1, x2, y2);
    int l2 = dis(x2, y2, x3, y3);
    int l3 = dis(x1, y1, x3, y3);
    arr[0] = l1;
    arr[1] = l2;
    arr[2] = l3;
    sort(arr, arr + 3);
    bool ans = is_right(arr[0], arr[1], arr[2]);
    if (ans == true)
    {
        cout << "RIGHT";
        nl;
        return;
    }
    if ((l1 + l2) > l3)
    {
    }
}
int main()
{
    fast;
    solve();
}
