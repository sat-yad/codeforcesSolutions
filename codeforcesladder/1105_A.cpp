#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n,s=0;cin>>n;int a[n];
    fl(0,n) cin>>a[i];
    sort(a,a+n);
    if(n%2) s=a[n/2];
    else s=(a[n/2]+a[n/2-1])/2;
    int cnt=0;
    fl(0,n){
        if(a[i]<s) cnt+=abs(s-a[i]-1);
        else if(a[i]==s) cnt+=0;
        else cnt+=abs(a[i]-1-s);
        // cout<<cnt;nl;
    }
    int m=s,ans=cnt;
    s-=1;cnt=0;
    fl(0, n)
    {
        if (a[i] < s)
            cnt += abs(s - a[i] - 1);
        else if (a[i] == s)
            cnt += 0;
        else
            cnt += abs(a[i] - 1 - s);
        // cout<<cnt;nl;
    }
    if(ans>cnt){ans=cnt;m=s;}
    cnt=0;
    s+=2;
    fl(0, n)
    {
        if (a[i] < s)
            cnt += abs(s - a[i] - 1);
        else if (a[i] == s)
            cnt += 0;
        else
            cnt += abs(a[i] - 1 - s);
        // cout<<cnt;nl;
    }
    if (ans > cnt)
    {
        ans = cnt;
        m = s;
    }

    cout<<m<<" "<<ans<<endl;
}
int main(){
    fast;
 solve();   
}
