#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n,x=0,y=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='L'){
            x-=1;
            if(x==1 && y==1){
                cout<<"yes"<<endl;
                return;
            }
        }
        else if(s[i]=='R'){
             x+=1;
             if(x==1 && y==1){
                cout<<"yes"<<endl;
                return;
             }
        }
        else if(s[i]=='U'){
              y+=1;
               if(x==1 && y==1){
                cout<<"yes"<<endl;
                return;
             }
        }
        else if(s[i]=='D'){
               y-=1;
                if(x==1 && y==1){
                cout<<"yes"<<endl;
                return;
             }
        }
    }
    cout<<"No"<<endl;
    x=0;
    y=0;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}