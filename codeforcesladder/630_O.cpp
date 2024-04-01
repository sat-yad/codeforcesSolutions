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
    double px, py, vx, vy, a, b, c, d, lv, lx, ly;
    cin >> px >> py >> vx >> vy >> a >> b >> c >> d;
    lv = sqrt(vx * vx + vy * vy);
    lx = vx / lv;
    ly = vy / lv;
    a /= 2;
    c /= 2;
    cout << fixed << setprecision(12) << px + lx * b << " " << py + b * ly;
    nl;
    cout << fixed << setprecision(12) << px - a * ly << " " << py + a * lx;
    nl;
    cout << fixed << setprecision(12) << px - c * ly<< " " << py + c * lx;
    nl;
    cout << fixed << setprecision(12) << px - d * lx - c * ly << " " << py - d * ly + c * lx;
    nl;
    cout << fixed << setprecision(12) << px - d * lx + c * ly << " " << py - d * ly - c * lx;
    nl;
    cout << fixed << setprecision(12) << px + c * ly << " " << py - c * lx;
    nl;
    cout << fixed << setprecision(12) << px + a * ly << " " << py - a * lx;
    nl;
}
int main()
{
    fast;
    solve();
}
// 8.000000000000
// 8.000000000000