#include <bits/stdc++.h>
using namespace std;
int main(){
   long int i,j,a,b,c,n,k,Ans,rem_n;
    while(cin>>n>>a>>b>>c)
    {
          Ans=0;
       for(i=0;i*a<=n;++i)
       {
           for(j=0;i*a+j*b<=n;++j)
           {
                rem_n=n-i*a-j*b;
                if(rem_n%c==0)
                {
                    k=rem_n/c;
                Ans=max(Ans,i+j+k);}
           }

       }
       cout<<Ans<<endl;
    }
}
  