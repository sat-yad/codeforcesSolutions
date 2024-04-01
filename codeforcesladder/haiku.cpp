#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   string a,b,c;
   getline(cin,a);
   getline(cin,b);
   getline(cin,c);
   int n1=0,n2=0,n3=0;
   string s="aeiou";
   for(int i=0;i<a.length();i++){
     for(int j=0;j<s.length();j++){
        if(a[i]==s[j]){
           n1++;
            break;
        }
     }
   }
   for(int i=0;i<b.length();i++){
     for(int j=0;j<s.length();j++){
        if(b[i]==s[j]){
           n2++;
            break;
        }
     }
   }
 for(int i=0;i<c.length();i++){
     for(int j=0;j<s.length();j++){
        if(c[i]==s[j]){
           n3++;
            break;
        }
     }
   }
//    cout<<n1<<" "<<n2<<" "<<n3<<endl;
   if(n1==5 && n2==7 && n3==5){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}
int main(){
    fast;
 solve();
}

