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
template <class T1, class T2, class Pred = std::less<T2>>
struct sort_pair_second
{
    bool operator()(const std::pair<T1, T2> &left, const std::pair<T1, T2> &right)
    {
        Pred p;
        return p(left.second, right.second);
    }
};
// sort(v.begin(), v.end(), sort_pair_second<int, int, greater<int>>());
void solve()
{
    ll n, m, x, y;
    cin >> n >> m;
    vector<pair<ll, ll>> v;
    fl(0, m)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), sort_pair_second<int, int, greater<int>>());
    //   fl(0,m) {cout<<v[i].first<<" "<<v[i].second;nl;}
    ll sum = 0, i = 0;
    while (n && i < v.size())
    {
        ll k = min(n, v[i].first);
        sum += v[i].second * k;
        i++;
        n -= k;
    }
    cout << sum;
    nl;
}
int main()
{
    fast;
    solve();
}