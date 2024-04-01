#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 string s1;cin>>s1;int flag=0;
   string str="AOYEUI",s="";
   transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
//    cout<<s1<<endl;
   for(int i=0;i<s1.size();i++){
    for(int j=0;j<str.size();j++){
        if(s1[i]==str[j]){
               flag=1;
               break;
        }
    }
    if(!flag){ s+='.';
    s+=tolower(s1[i]);}
    flag=0;
   }
   cout<<s;nl;
}
int main(){
    fast;
 solve();
}
