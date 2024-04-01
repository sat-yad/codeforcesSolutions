#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
  ll  arr[n];
  string ans="no";
   ll  brr[n];
    int count=0;
     int j=0;
     int l=0,r=0;
     int flag=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
       brr[i]=arr[i];
    }
    sort(brr,brr+n);
    for(int i=0;i<n;i++){
       
    if(arr[i]==brr[i]){
    count++;
    }
}

if(count==n){
   ans="yes";
}
if(ans=="no"){
        for(int i=0;i<n-1,j<1;)
        {
            if(arr[i]<arr[i+1])
            {
                i++;
            }

            else
            {
                l=i;
                r=i;
               while(arr[i]>arr[i+1] && i<n-1)
               {
                   i++;
                   r++;
               }

               sort(arr+l,arr+r+1);
               j++;
            }
        }
         for(int i=0;i<n;i++)
        {
            if(brr[i]!=arr[i])
            {
              flag=0;
              break;
            }
        }
}
        if(flag==1 || ans=="yes"){
               cout<<"yes\n"<<l+1<<" "<<r+1;
        }
        else{
                    cout<<"no"<<endl;
        }
        
}