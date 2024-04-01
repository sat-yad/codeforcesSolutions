#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    //  ll n,i=0;
    //  cin>>n; 
    //  ll a=n/10;
    //  ll c=n%10;
    //  ll b=n/100;
    //  ll d=n%100;
    //  if(n>=0 || n/10==0){
    //     cout<<n<<endl;
    //  }
    //  else{
    //     if(a>b){
    //         cout<<a<<endl;
    //     }
    //     else{
    //         cout<<b<<endl;
    //     }
    //  }
    string s;
    cin>>s;
     int  n=s.length();
    if(stoi(s)>=0 || n==1){
        cout<<stoi(s)<<endl;
    }
    else{
    string ch=s.substr(0,n-2);
    ch=ch+s[n-1];
    if(stoi(s.substr(0,n-1))>stoi(ch)){
        cout<<stoi(s.substr(0,n-1));
    }
    else{
        cout<<stoi(ch);
    }
    }
    
}
int main(){
    fast;
 solve();
}
