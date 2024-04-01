#include <bits/stdc++.h>
// #include <iostream>
// #include <stack>
using namespace std;
// int count(int n){
//      return n%10;
// }

int main(){
    int n;
    cin>>n;
    string str="mukund";
    int c=n;
      string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen"
                    ,"fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
      string arr1[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
        if(n<20){
            cout<<arr[n];
        }
        if(n>=20){
            
           int a=c/10-2;
           int b=c%10;
           if(n%10==0){
             cout<<arr1[a];
           }
           else{
           cout<<arr1[a]<<"-"<<arr[b]<<endl;
           }
        }
        // cout<<str.substr(2);
        // stack s;

}