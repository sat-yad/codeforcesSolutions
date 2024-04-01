// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key (val): returns the no. of values less than val
// find_by_order (k): returns the kth largest element.(0-based)
#define int long long
typedef pair<int, int> II;
typedef vector<II> VII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long LL;
#define PB push_back
#define F first
#define S second
#define ALL(a) a.begin(), a.end()
#define SET(a, b) memset(a, b, sizeof(a))
#define SZ(a) (int)(a.size())
#define FOR(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define deb(a) cerr << #a << " = " << (a) << endl;
#define deb1(a)                                                        \
    cerr << #a << " = [ ";                                             \
    for (auto it = a.begin(); it != a.end(); it++) cerr << *it << " "; \
    cerr << "]\n";
#define endl "\n"
const long long mod = 1e9 + 7;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void solve() {
    int MAXN = 1e5 + 10;
    int need = 1e18;
    unordered_set<int, custom_hash> nums;
    FOR(i, 2, MAXN) {
        int tot = 1;
        int pw = i;
        tot += pw;
        FOR(j, 0, 500) {
            pw *= i;
            if (need - tot < pw)
                break;
            tot += pw;
            nums.insert(tot);
        }
    }

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        if (nums.count(n)) {
            cout << "YES\n";
            continue;
        }
        if (n > 1e5) {
            int rt = 1 - (4 * (1 - n));
            if (rt > 0) {
                int rtt = sqrtl(rt);
                if (rtt * rtt == rt) {
                    rtt--;
                    if (rtt % 2 == 0) {
                        rtt /= 2;
                        int check = 1 + rtt + rtt * rtt;
                        if (check == n) {
                            cout << "YES\n";
                            continue;
                        }
                    }
                }
            }
        }
        cout << "NO\n";
    }
}

signed main() {
    fast_io;
    //  freopen("input.txt", "r", stdin);
    //  freopen("output.txt", "w", stdout);
    int totalTests = 1;
    // cin >> totalTests;
    for (int testNo = 1; testNo <= totalTests; testNo++) {
        // cout << "Case #" << testNo << ": ";
        solve();
    }
    return 0;
}