#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
   for(int i=n-1;i>=0;i-=2){
        sum+=min(a[i],a[i-1]);
   }
    cout<<sum<<endl;
}
