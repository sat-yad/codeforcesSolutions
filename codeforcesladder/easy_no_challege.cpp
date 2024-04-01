#include <bits/stdc++.h>
using namespace std;
#define mod 1073741824
int countdiv(int n){
    int count=1;
    // for(int i=2;i<=n;i++){
    //     if(n%i==0){
    //         count++;
    //                 }
    // }
	int curr = 0;
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			while(n%i==0){
				curr++;
				n/=i;
			}
			count *= (curr+1);
			curr = 0;
		}
	}
	if(n>1){ 
        count *= 2;
        return  count;
        }
     else{
    return count;
     }
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                // int x=countdiv(i*j*k);
                  sum+=countdiv(i*j*k);
                //   sum=sum%mod;
            }
        }
    }
    sum=sum%mod;
    cout<<sum<<endl;
}