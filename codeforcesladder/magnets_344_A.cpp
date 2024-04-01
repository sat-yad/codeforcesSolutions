// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// long long N;
// cin>>N;
// long long arr[1000000];
// long long arr1[1000000]={0};
// long long ans=1;
// for(int i=0;i<2*N;i+=2){
//     cin>>arr[i];
// }
// int j=0;
//   for(int i=0;i<2*N;i+=2){
//      if(arr[i]==arr[i+2]){
//       arr[j]++;
//      }
//      else{
//        j++;
//      }
//   }
//   cout<<j<<endl;
// string ;
// for(int i=0;i<N;i++)
// {
//     str[i];
// }
// int j=0;
// for(int i=0;i<N;i++){
// if(str[i]!=str[i+1]){
//     j++;
// }
// }
// cout<<j<<endl;
// }
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    char a[n][2];
 
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
 
    int count = 0;
 
    char c = a[0][0];
 
    for (int i = 0; i < n;i++){
        if(c!=a[i][0]){
            count++;
            c = a[i][0];
        }
 
    }
 
    cout << count+1;
}