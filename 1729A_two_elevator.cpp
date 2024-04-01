#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
    cin>>a>>b>>c;
    // int k1=0,k2=0;  
    int k1=a-1;
   int  k2=abs(b-c)+  (max(b,c)-1);
    // for( ;a>1;a--){
    //  k1++;
    // }
    // if(c>b){
    // for(;b<c;b++){
    //     k2++;
    // }
    // for( ;c>1;c--){
    //  k2++;
    // }
    // }
    // else{
    // for(;b>c;b--){
    //     k2++;
    // }
    // }
    if(k1<k2){
        cout<<1<<endl;
    }
    else if(k1>k2){
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }

    }
    }
