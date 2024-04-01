#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int r,g,b,cnt=0;
    cin>>r>>g>>b;
    while(r>0 || g>0 || b>0){
        if(cnt%3==0){ r-=2;}
        else if(cnt%3==1){ g-=2;}
        else if(cnt%3==2){ b-=2;}
        cnt++;
    }
    cout<<cnt+29;nl;
}
int main(){
    fast;
 solve();
}
