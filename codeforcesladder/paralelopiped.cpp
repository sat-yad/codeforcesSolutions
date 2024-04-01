#include <bits/stdc++.h>
using namespace std;
int main(){

     int x,y,z;
    cin>>x>>y>>z;
     int ans=0;
     ans += sqrt( (x*z)/y);
	ans += sqrt( (x*y)/z );
	ans += sqrt( (y*z)/x);
    // int x,y,z;
    // cin>>x>>y>>z;
    // int i,j;
    // for(i=1;i<=x;i++){
    //     for(j=1;j<=x;j++){
    //         if(i*i+2*i*j==x+y+z){
    //             break;
    //         }
    //     }
    //    break;
    // }
    cout<<ans*4<<endl;
}