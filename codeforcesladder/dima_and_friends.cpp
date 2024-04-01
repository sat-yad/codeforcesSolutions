#include <iostream>
using namespace std;
int main(){
    int n,b;
    cin>>n;
    int sum=0;
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>b;
        sum+=b;
    }
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1)!=1){
            ans++;
        }

    }
cout<<ans<<endl;

}