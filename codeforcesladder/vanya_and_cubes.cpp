#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j=1;
    int s=0;
    while(n){
    for(int i=1;i<=j;i++){
     s+=i;
    //  if(s>=n){
    //    break;
    //  }
    // }
    }
    n-=s;
    if(n<s+j+1){
        break;
    }
    s=0;
j++;
}
cout<<j<<endl;
}