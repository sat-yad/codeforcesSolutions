#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// point (x', y') is (x, y)'s right neighbor, if x' > x and y' = y
// point (x', y') is (x, y)'s left neighbor, if x' < x and y' = y
// point (x', y') is (x, y)'s lower neighbor, if x' = x and y' < y
// point (x', y') is (x, y)'s upper neighbor, if x' = x and y' > y
void solve() {
    int n;
    cin>>n;
     int i,j,N=0;
  int X[n+1],Y[n+1];
  for(int i=0;i<n;i++){
   cin>>X[i]>>Y[i];
  }
  for(int i=0;i<n;i++){
    int c1=0,c2=0,c3=0,c4=0;
   ll x=X[i];
   ll y=Y[i];
            for(j=0;j<n;j++){
                if(X[j]==x){
                    if(Y[j]>y){
                        c1++;
                    }
                    if(Y[j]<y){
                        c2++;
                    }
                }
                if(Y[j]==y){
                    if(X[j]>x){
                        c3++;
                    }
                    if(X[j]<x){
                        c4++;
                    }
                }
        }
        if(c1>0 && c2>0 && c3>0 && c4>0){
            N++;
}
  }
cout<<N<<endl;
}
int main(){
    fast;

 solve();
}
// 9
// -565 -752
// -184 723
// -184 -752
// -184 1
// 950 723
// -565 723
// 950 -752
// 950 1
// -565 1