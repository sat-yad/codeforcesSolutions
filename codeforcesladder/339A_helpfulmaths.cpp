// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int i=0;
//     int j=2;
//     for(int i=0;i<s.length();i++){
//         int k=0;
//     int j=2;
//       while(k<s.length()-2 && j<s.length()){
//         if(s[k]>s[j]){
//        int temp =s[k];
//        s[k]=s[j];
//        s[j]=temp;
//        k+=2;
//        j+=2;
//         }
//         else{
//             k+=2;
//             j+=2;
//         }

//       }
//     }
//     cout<<s<<endl;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   string s;
   cin>>s;
   int n=s.length();
   int  arr[n],j=0;
   for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
             arr[j]=s[i]-'0';
             j++;
        }
   }
   for(int i=0;i<j;i++){
    cout<<arr[i]<<" ";
   }
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}