// #include <iostream>
// using namespace std;
// int main(){
//      int n;
//      cin>>n;
//      int arr[100001];
//      for(int i=1;i<=n;i++){
//         cin>>arr[i];
//      }
//      int a;
//      cin>>a;
//      long long sum1=0;long long sum2=0;
//      while(a>0){
//         int b;
//         cin>>b;
//     for(int i=1;i<=n;i++){
//         if(arr[i]==b){
//             sum1+=arr;
//         }
//     }
//         for(int i=n;i>0;i--){
//         if(arr[i]==b){
//             sum2+=n-i+1;
//         }
//     }
//     a--;
// }
// cout<<sum1<<" "<<sum2<<endl;
// }
#include <bits/stdc++.h>
using namespace std;
int main() {
	 int n, a, index1[100001];
	    cin>>n;
	    for (int i = 1; i <= n; ++i)
	    {
	        cin>>a;
	        index1[a] = i;
	    }
	    int m, b;
	    cin>>m;
	    long long Vasya=0, Petya=0;
	    while (m--)
	    {
	        cin>>b;
	        Vasya += index1[b];
	        Petya += (n + 1 - index1[b]);
	    }
	   cout<< Vasya<<" "<<Petya<<endl;
}