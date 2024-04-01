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
// void solve() {

// // }
// int gcd(int a, int b) {
//     if (!a || !b)
//         return a | b;
//     unsigned shift = __builtin_ctz(a | b);
//     a >>= __builtin_ctz(a);
//     do {
//         b >>= __builtin_ctz(b);
//         if (a > b)
//             swap(a, b);
//         b -= a;
//     } while (b);
//     return a << shift;
// }
int main()
{
    fast;
    char ch;
    cin >> ch;
    cout << int(ch) << endl;
}
