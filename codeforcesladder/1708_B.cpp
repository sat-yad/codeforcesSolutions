#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
#define N 2147483648
ll  solve(int  x) {
    ll ans = 0;
    while (x)
    {
        ll temp = ans * 10 + x % 10;
        if (temp / 10 != ans)
            return 0;
        ans = temp;
        x /= 10;
    }
    if (ans >  N- 1 && ans < -N)
        return 0;
    else
        return ans;
}
int main(){
    fast;
ll t=1;
// cin>>t;
while(t--){
    int x;cin>>x;
 cout<<solve(x);
}
}
// 2147483648
// 9646324351
    // class Solution {
    // public:
    //     int mincostTickets(vector<int>& days, vector<int>& costs) {
    //           vector<int> v(366,INT_MAX);
    //           int cnt=0;
    //           v[0]=0;
    //           for(int i=1;i<=365;i++){
    //               if(cnt<days.size() && i==days[cnt]) {
    //                  v[i]=min(v[i],v[i-1]+costs[0]);
    //                 if(i>=7) v[i]=min(v[i],v[i-1]+costs[1]);
    //                 if(i>=30) v[i]=min(v[i],v[i-30]+costs[2]);
    //                 cnt++;
    //               }
    //               else v[i]=v[i-1];
    //           }
    //           return v[365];
    //     }
    // };