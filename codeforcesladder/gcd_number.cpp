#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
int gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve(){
    ll n;
    cin>>n;
    ll a=2,b,c=1;
    while(a<n-2){
        b=n-a+1;
        c=gcd(a,b);
       if(a!=b && b!=c){
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
        break;
       }
       a++;
    }
    // if (n%2==0) 
    // {
    //     cout<<"2 "<<(n-1)-2<<" 1\n";
	// }
    // else {
	// 	int now=(n-1)/2;
	// 	if (now%2==0) {
    //         cout<<now-1<<" "<<now+1<<" "<<1<<endl;
    //     }
	// 	else {
    //         cout<<now-2<<" "<<now+2<<" "<<1<<endl;
    //     }
	// }
}


int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
         solve();
    }
}
