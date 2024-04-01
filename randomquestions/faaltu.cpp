#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=10;i++){
        int c=n;
        int count =0;
      while(c!=0){
        if(c%10==i){
            count++;
        }
        c/=10;
      }
      cout<<" The no :"<<" "<<i<<" "<<"comes"<<" "<<count<<" "<<"times"<<endl;
    }
 }