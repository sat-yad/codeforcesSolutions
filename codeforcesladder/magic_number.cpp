#include <bits/stdc++.h>
using namespace std;
int main(){
      // string str;
      // cin>>str;
      int flag=1;
      // for(int i=0;i<str.length();){
      //  if(str[i]=='1' && str[i+1]=='4'&& str[i+2]=='4'){
      //    i+=3;
      //  }
      //  else if(str[i]=='1' && str[i+1]=='4'){
      //   i+=2;
      //  }
      //  else if(str[i]=='1' ){
      //   i++;
      //  }
      //  else{
      //   flag=0;
      //  }
      // }
      // if(flag){
      //   cout<<"YES"<<endl;
      // }
      // else{
      //   cout<<"NO"<<endl;
      // }
      long long n;
      cin>>n;
      while(n!=0){
        if(n%1000==144){
          n/=1000;
        }
        else if(n%100==14){
          n/=100;
        }
        else if(n%10==1){
          n/=10;
        }
        else{
              flag=0;
              break;
        }
      }
      if(flag){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }

}
  //   https://codeforces.com/contest/1362/problem/C