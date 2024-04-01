#include <bits/stdc++.h>
using namespace std;
#define ll               long long
#define uin              unsigned int
#define ull              unsigned long long
#define ld               long double 
#define fl(i,w,n)        for(ll i=w;i<n;i++)
#define rfl(i,w,n)       for(ll i=w;i>=n;i--)
#define  F              first
#define  S             second
#define  B              begin()
#define  E               end()
#define EB               emplace_back
#define PB               push_back
#define P                pop()
#define PRES(c,x)        ((c).find(x)!=(c).end())
#define all(x)           x.begin(), x.end()
typedef vector<string>   vs;
typedef pair<int,int>    pii;
typedef pair<ll,ll>      pll;
typedef vector<int>      vi;
typedef vector<ll>       vl;
typedef vector<vi>       vvi;
typedef vector<vl>       vvl;
typedef vector<pii>      vpii;
typedef vector<pll>      vpll;
#define um(x, y)          unordered_map<x, y>
#define us(x)             unordered_set<x>
#define mp                  map ii 
#define mpl                 map lii
#define mem1(a)                memset(a,-1,sizeof(a))
#define mem0(a)                memset(a,0,sizeof(a))
#define sum(a)          ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)         (*min_element((a).begin(), (a).end()))
#define maxe(a)         (*max_element((a).begin(), (a).end()))
#define mini(a)         ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)          ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x)      ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x)      ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define nl               <<"\n";
#define nll              cout<<"\n";
#define Yes              cout<<"Yes"<<"\n";
#define No               cout<<"No"<<"\n";
#define PI               3.1415926535897932384626
#define SET(n)           cout << fixed << setprecision(n)
#define get(s)              getline(cin, s)
#define ppc                 __builtin_popcount
#define ppcll               __builtin_popcountll
#define clz                 __builtin_clz   
#define clzll               __builtin_clzll
#define ctz                 __builtin_ctz
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
const ll mod=1000000007;
bool xyz(ull n) {
     unordered_map<ull, int> factors;
    for (ull i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            factors[i]++;
        }
    }
    if (n > 1) {
        factors[n]++;
    }
    int count = 0;
    for (const auto& factor : factors) {
        if (factor.second > 1) {
            count++;
        }
    }
    return count > 1;
}
void solve(vl dp) {
        ull x;
        cin >> x;
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
int main(){
    fast;
ll t;
cin>>t;
 ll MAXN = 1e6 + 10;
    vl dp(MAXN, 0);
    // fl(i, 2, MAXN) {
    //     ll tot = 1;
    //     ll pw = i;
    //     tot += pw;
    //     fl(j, 0, 500) {
    //         pw *= i;
    //         tot += pw;
    //         if (tot >= MAXN)
    //             break;
    //         dp[tot] = 1;
    //     }
    //    const int S = sqrt(MAXN) + 1;
    //     vi primes;
    //      // Generate primes using segmented sieve
    // vi isPrime(S, 1);
    // for (int i = 2; i <= sqrt(S); i++) {
    //     if (isPrime[i]) {
    //         for (int j = i * i; j < S; j += i) {
    //             isPrime[j] = 0;
    //         }
    //     }
    // }
    // for (int i = 2; i < S; i++) {
    //     if (isPrime[i]) {
    //         primes.push_back(i);
    //     }
    // }

    // // Apply segmented sieve
    // for (int k = 0; k < t; k++) {
    //     int low = k * S;
    //     int high = (k + 1) * S - 1;
    //     vi isSegmentPrime(S, 1);

    //     for (int p : primes) {
    //         int start = ceil(low / (double)p) * p;
    //         for (int j = start; j <= high; j += p) {
    //             if (j != p) {
    //                 isSegmentPrime[j - low] = 0;
    //             }
    //         }
    //     }

    //     if (k == 0) {
    //         isSegmentPrime[0] = 0;  // 1 is not prime
    //     }

    //     for (int i = low; i <= high; i++) {
    //         if (isSegmentPrime[i - low]) {
    //             dp[i] = 1;
    //         }
    //     }
    // }
    
while(t--){
 solve(dp);
}
}

