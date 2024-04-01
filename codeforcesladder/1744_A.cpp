#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
int main()
{   fast;
    int t;  
    cin >> t;
    while (t--)
    {
      int n,q;
      cin>>n>>q;
      long long  arr[n];
      long long sum=0,x=0,y=0;
      for(int i=0;i<n;i++) {cin>>arr[i];
        if(arr[i]%2==0){x++;}
        else{y++;}
        sum+=arr[i];
      }
      while(q--)
      {
          long long  a,value;
          cin>>a>>value;
          if(a==0)
          {
              if(value%2==1)
				{
					sum+=value*x;
					y=y+x;
					x=0;
				}
				else
					sum+=value*x;
          }
           if(a==1)
          {
           if(value%2==1)
				{
					sum+=value*y;
					x=x+y;
					y=0;
				}
				else
					sum+=value*y;
          }
      
        cout<<sum<<endl;
    }
    }
}