#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
    ll n,m,c1=0;
    cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<n;i++){
       cin>>arr[i];
        if(arr[i]==1){
                c1++;}
    }
    ll a ,b,c2;
    for(ll i=0;i<m;i++){
       cin>>a>>b;
       c2=n-c1;
       if(((b-a+1)%2==0 ) && (2*c1>=b-a+1) && (2*c2>=b-a+1))  {
              cout<<1<<endl;
       }
       else{
        cout<<0<<endl;
       }
    }
}

int main(){
    fast;
 solve();
}
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     long long int n, m;
//     cin >> n >> m;
//     long long int a[n],b[n],c[n];
//     int count_1 = 0;
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//          if(a[i]==1){
//             count_1++;
//         }
//     }
//     for (int i = 0; i < m;i++)
//         cin >> b[i] >> c[i];
 
//     // // sort(a, a + n);
//     // int count_1 = 0;
//     // for (int i = 0; i < n;i++){
//     //     if(a[i]==1){
//     //         count_1++;
//     //     }
//     // }
 
//     int count_ = n - count_1;
 
//     for (int i = 0; i < m; i++)
//     {   int x=abs(b[i]-c[i])+1;
//         if(x%2==0){
//             if (x/2<=count_1 && x/2<=n-count_1)
//                 cout << 1 << endl;
//                 else{
//                 cout << 0 << endl;
//                 }
//         }
//         else{
//                 cout << 0 << endl;
//         }
//     }
 
//     return 0;
// }