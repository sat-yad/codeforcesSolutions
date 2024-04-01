#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
    string a,b;cin>>a>>b;
	reverse(b.begin() ,b.end());
    // cout<<stoi(a);
    	cout<<stoi(a)+stoi(b);
    // ll a,b;
    // cin>>a>>b;
    // ll c1=a;
    // ll c2=b;
    // int arr1[10]={0};
    // int arr2[10]={0};
    // int arr3[11]={0};
    // int j=0;
    // while(a!=0){
    //   int d=a%10;
    //   arr1[j]=d;
    //   a/=10;
    //   j++;
    // }
    // int i=0;
    // while(b!=0){
    //   int d=b%10;
    //   arr2[i]=d;
    //   b/=10;
    //   i++;
    // }
    // // for(int k=0;k<j;k++){
    // //     cout<<arr1[k]<<" ";
    // // }
    // // cout<<endl;
    // // for(int k=0;k<i;k++){
    // //     cout<<arr2[k]<<" ";
    // // }
    // // cout<<endl;
    // // cout<<j<<" "<<i<<endl;
    // int z=max(i,j);
    // int m=0;
    // for(int k=0; k<z  ;k++ ){
    //     if(i<=0){
    //     arr3[z-k-1]=arr1[m];
    //     m++;
    //     }
    //     else if(m>=j){
    //         arr3[z-k-1]=arr2[i-1];
    //         i--;
    //     }
    //     else{
    //         arr3[z-k-1]=arr1[m]+arr2[i-1];
    //         i--;
    //         m++;
    //     }
        
    // }
    //  // cout<<endl;
    // // for(int k=0;k<z;k++){
    // //     cout<<arr3[k]<<" ";
    // // }
    // // cout<<endl; 
    // ll n=0;
    // for(int k=0;k<z;k++){
    //     ll pr=arr3[k]*pow(10,z-k-1);
    //     n=n+pr;
    // }

    // // if(c1%100==0 || c2%100 ==0){
    // // cout<<n+1<<endl;}
    // // else{
    //     cout<<n<<endl;
    // // }
}

int main(){
    fast;
 solve();
}