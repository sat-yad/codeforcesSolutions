#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
   int  count=0;
    while(n!=0){
        cin>>a>>b>>c;
        if(a==1){
            if(b==1){
                count++;
            }
            if(b==0 && c==1){
                count++;
            }
            
        }
        if(a==0){
              if(b==1 && c==1){
                count++;
              }
        }
        n--;
    }
    cout<<count<<" ";
}
