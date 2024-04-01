#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int sum1=0, sum2=0,sum3=0;
    // int a[3]={0};
   int arr[100][3];
    for(int i=0;i<n;i++){
       for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
    }
    //  for(int i=0;i<n;i++){
    //     cin>>arr2[i];
    // }
    //  for(int i=0;i<n;i++){
    //     cin>>arr3[i];
    // }
    int count=0;
    int a[3]={0};
    for(int i=0;i<n;i++){
        // if(arr1[i]+arr2[i]+arr3[i]==0){
        //     count++;
          a[0]+=arr[i][0];
          a[1]+=arr[i][1];
          a[2]+=arr[i][2];
        }
     for(int i=0;i<3;i++){
        if(a[i]==0){
            count++;
        }
     }
    if(count==3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
       
