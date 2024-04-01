#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// ll searchResult(vector<ll> arr, ll k){
//     vector<ll>::iterator it;
//     it = find(arr.begin(), arr.end(), k);
//     if(it != arr.end())
//         return (it - arr.begin());
//     else
//         return -1;
// }
ll searchResult(vector<ll>fbox,ll k){
    for(ll i=0;i<fbox.size();i++){
         if(fbox[i]==k){
             return i;
         }
    }
    return -1;
}
void solve() {
ll n;
cin>>n;
ll a=0,b=1,c=0;
vector<ll>fbox;
fbox.push_back(a);
fbox.push_back(b);
while(c<n){ 
    c=a+b;
    fbox.push_back(c);
    a=b;
    b=c;
}
// for(int i=0;i<fbox.size();i++){
//     cout<<fbox[i]<<" ";
// }
if(searchResult(fbox,n)==-1){
    cout<<"I'm too stupid to solve this problem" <<endl;
}
else{
    cout<<0<<" "<<0<<" "<<n<<endl;
}
}
int main(){
    fast;
 solve();
}
