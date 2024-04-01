#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int q, d;
        cin >> q >> d;
        int a[q];
        for (int i = 0; i < q; i++)
            cin >> a[i];
        for (int i = 0; i < q; i++)
        {
            if (a[i] % 10 == d || a[i] >= 10 * d)
            {
                cout << "YES" << endl;
            }
            else
            {
                bool ok = false;
                for (int j = 0; j < d; j++)
                {
                    if ((a[i] - 10 * j - d) >= 0 && (a[i] - 10 * j - d) % d == 0)
                    {
                        ok = true;
                        cout << "YES" << endl;
                        break;
                    }
                }
                if (!ok)
                    cout << "NO" << endl;
            }
        }
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}