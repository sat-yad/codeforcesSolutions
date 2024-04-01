#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[1000000];
      while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
    int   c=1;
    int  c2=0;
  
    int  c4=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==25)
                c2++;
            else if(a[i]==50)
            {
                if(c2<1)
                {
                    c=0;
                    break;
                }
                else
                {
                    c2=c2-1;
                    c4=c4+1;
                }
            }
            else if(a[i]==100)
            {
                if(c2>=1&&c4>=1)
                {
                    c2=c2-1;
                    c4=c4-1;
                }
                else if(c2>=3)
                {
                    c2=c2-3;
                }
                else
                {
                    c=0;
                    break;
                }
            }


        }
        if(c==1){
                cout<<"YES\n";
        }
            else{
                cout<<"NO\n";
            }
}
return  0;
}
