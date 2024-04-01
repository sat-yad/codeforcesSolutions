#include <iostream>
using namespace std;
int main(){
    
    int count;
    int n;
    cin>>n;
    while(n!=0)
    {
        int c=n;
       if(c%10==0)
       {
           if(c%100==1)
           {
            count++;
           }
           c/=100;
       }
       else
       {
       for(int i=2;i<=9;i++){
     
        int count1 =0;
      while(c!=0){
        if(c%10==i){
            count1++;
        }
        c/=10;
      }


    }
       }

}
}