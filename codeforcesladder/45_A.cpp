#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   string str[12]={"January", "February", "March", "April", "May",
    "June", "July", "August", "September","October","November","December"};
    string s;
    int k,j,m;
    cin>>s>>k;
    for(int i=0;i<13;i++){
      if(str[i]==s){
           j=i;
      }
    }
    m=(j+k)%12;
    cout<<str[m];nl;
}
int main(){
    fast;
 solve();
}
