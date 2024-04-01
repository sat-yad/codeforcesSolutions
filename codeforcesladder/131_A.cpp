#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    string str;
    cin>>str;
    int cnt=0;
    for(int i=1;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
         cnt++;
        }
    }
    if(cnt==str.size()-1){
         for(int i=0;i<str.length();i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i]=toupper(str[i]);
            }
            else{
                str[i]=tolower(str[i]);
            }
    }
}
  cout<<str<<endl;
}
int main(){
    fast;
 solve();
}

// cAPSlOCK
//cAPS
//lock
