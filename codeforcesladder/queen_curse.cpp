#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define mod7 1000000007
#define mod9 998244353
#define inf INT_MAX
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626
#define set_bits __builtin_popcountll
#define all(v) v.begin(), v.end()
#define sortall(v) sort(all(v))
#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define forn1(i, n) for (int i = 1; i <= int(n); ++i)
#define fornrev(i, n) for (int i = int(n) - 1; i >= 0; --i)
#define fornab(i, a, b) for (int i = int(a); i <= int(b); ++i)
#define ln "\n"
#define debug(x) cout << #x << ": " << x << "\n"
#define debugarr(arr, i, j)      \
    for (int k = i; k <= j; k++) \
    {                            \
        cout << arr[k] << " ";   \
    }                            \
    cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> rooms(n, vector<int>(m));
        int max_dist = 0;
        priority_queue<int> pq;
        forn(i, n)
        {
            forn(j, m)
            {
                cin >> rooms[i][j];
                pq.push(rooms[i][j]);
            }
        }
        if (k + 1 > pq.size())
        {
            cout << "-1\n";
            continue;
        }
        pq.pop();
        k--;
        while (k--)
        {
            pq.pop();
        }
        max_dist = pq.top();
        pq.pop();
        while (!pq.empty())
        {
            max_dist = max(max_dist, pq.top());
            pq.pop();
        }
        cout << max_dist << ln;
    }
    return 0;
}
