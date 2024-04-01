#include <bits/stdc++.h>
using namespace std;
int count(int c){
      int count=0;
      while(c!=0){
        int d=c%10;
        count++;
        c/=10;
      }
      return count;
}
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    while(n!=0){
       int d= count(a);
       

    }
}