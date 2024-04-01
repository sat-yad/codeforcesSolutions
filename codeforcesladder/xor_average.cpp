#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
int main(){
     fast;
     int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<'1'<<" "<<'3'<<" ";
            for(i=0;i<n-2;i++)
            {
                cout<<"2"<<" ";
            }
            cout<<endl;
 
        }
        else
        {
            for(i=0;i<n;i++)
            {
                cout<<'3'<<" ";
            }
            cout<<endl;
        }
 
    }
}