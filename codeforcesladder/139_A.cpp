#include <bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int arr[1000];
 
    // for(int i=0;i<=6;i++){
    //     cin>>arr[i];
    // }
      
    //  for(int i=0;i<=6;i++){
    //     //   int current_index=i;
    //      n-=arr[i];
    //      if(n<=0){
    //        cout<<i+1<<endl;
    //         break;
    //      }
    //      if(i==6)
    //         i=-1;

    //  }
    //  cout<<current_index;
    // int n;
    // cin >> n;
    // int arr[7];
    // for (int i = 0; i < 7; i++)
    // {
    //     cin >> arr[i];
    // }
    // int count = 0, i = 0;
    // while (n>0)
    // {
    //     n -= arr[i];
    //     if(n>0)
    //     count++; 
    //     else break;
    //     count=count%7;
    //     i++;
    //     if(i>6)
    //     i=i-7;
    // }
    // // cout<<7%7;
    // // count = count % 7;
    // cout << count+1 << endl;
    int n;
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    int count = 0, i = 0;
    while (n>0)
    {
        n -= arr[i];
        if(arr[i]>0)
        count++; 
        count=count%7;
        i++;
        if(i>6)
        i=i-7;
    }
    // cout<<7%7;
    // count = count % 7;
    cout << count << endl;


}
 


