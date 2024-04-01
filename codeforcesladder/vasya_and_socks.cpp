#include <bits/stdtr1c++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i=1;
    int count=1;
    while(i<=n){
    
         if(i==m*count){
          n++;
          count++;
         }
    
         i++;
    }
    cout<<i-1<<"\n";
}