#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
char solve() {
// //    ll a1,p1,a2,p2;
// //    cin>>a1>>p1;
// //    cin>>a2>>p2;
// //     a1 *= pow(10,p1);
// //     a2 *= pow(10,p2);
// //    if(a1>a2){ cout<<">"<<endl; }
// //    else if(a1==a2) { cout<< "=";nl;}
// //    else {cout<<"<";nl;}
   string s1,s2;
   int p1,p2;
   cin>>s1>>p1>>s2>>p2;
    if(s1.size()+p1 > s2.size()+p2) {return '>';}
    if(s1.size()+p1 < s2.size()+p2){ return '<';}
    while(s1.size()<s2.size()) {s1+='0';}
    while(s2.size()<s1.size()) {s2+='0';}
    if(s1>s2){ return '>';}
    if(s1<s2) {return '<';}
    return '=';
}
int main(){
    fast;
int t;
cin>>t;
while(t--){
 cout<<solve();nl;
}
}
	// if(b>a*m){
    //     sum=n*a;}
	// else{
	// 	sum=n/m*b;
	// 	if(a*(n%m)<b){sum+=a*(n%m);}
	// 	else{ sum+=b;}
	// }
	// cout<<sum;nl;