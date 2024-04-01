#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n;
cin>>n;
string s="",s1="I hate that";
string s2="I love that";
// vector<string >box;
for(int i=1;i<=n;i++){
    if(i%2!=0){
       s+=s1;
       s+=" ";
    }
    else{
        s+=s2;
        s+=" ";
    }
}
string s3="it";
n=s.size();
s.erase(n-5,n-1);
s+=s3;
cout<<s<<endl;


}
int main(){
    fast;
 solve();
}