#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    string A,N;
    cin>>A>>N;
    cout<<max(abs(A[0]-N[0]),abs(A[1]-N[1]));
    while(A!=N){
       if(A[0]>N[0]){
           cout<<"L"<<" ";
           
       }
    }
}
int main(){
    fast;
 solve();
}
