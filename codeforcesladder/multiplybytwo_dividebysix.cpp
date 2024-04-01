#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
// ll count(ll n,int i){
//        ll c=0;
//        while(n%i==0){
//             c++;
//             n/=i;
//        }
//        return c;
// }
void solve(){
      ll n; 
      cin>>n;
      
      int c1=0;
    //   int c2=0;
    
	// 	while (n % 2 == 0) {
	// 		n /= 2;
	// 		++c1;
	// 	}
	// 	while (n % 3 == 0) {
	// 		n /= 3;
	// 		++c2;
	// 	}
    //   if(c1<=c2){
    //     cout<<2*c2-c1<<endl;
    //   }
    
    //   else{
    //     cout<<-1<<endl;
    //   }
    ll copy=n;
    while(copy!=1){
        if(copy%6==0){
            c1++;
            copy/=6;
        }
        else if(copy%3==0){
            c1++;
            copy *=2;
        }
        else{
            c1=-1;
            break;
        }

    }
    cout<<c1<<endl;
}
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
