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
    int n, flag = 0;
    cin >> n;
    vector<pair<string, int>> v;
    string s;
    fl(0, n)
    {
        cin >> s;
        int n1 = s.size();
        v.push_back(make_pair(s, n1));
    }
    sort(v.begin(), v.end(), sort_pair_second<string, int, greater<int>>());
    fl(0, v.size()) cout << v[i].first << " ";
    nl;
    string s1 = v[0].first;
    fl(1, n)
    {
        int g = s1.find(v[i].first);
        if (g == -1)
        {
            flag == 1;
            break;
        }
    }
    if (flag)
    {
        cout << "NO";
        nl;
    }
    else
    {
        cout << "YES";
        nl;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i].first;
            nl;
        }
    }
}

int main()
{
    fast;
    solve();
}
// 5
// a
// aba
// abacaba
// ba
// aba
