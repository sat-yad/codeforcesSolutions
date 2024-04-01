#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
    cin>>a>>b>>c;
     int k1=a-1;
     int k2=abs(b-c)+ c-1;
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
