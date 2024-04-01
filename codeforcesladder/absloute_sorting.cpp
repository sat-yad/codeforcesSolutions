#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
int check_sorted(vector<int>arr,int n){
      vector<int>copy;
    for(int i=0;i<n;i++){
        
            int a=arr[i];
            copy.push_back(a);
        }
      
      int flag=1;
    sort(copy.begin(),copy.end());
    for(int i=0;i<n;i++){
        if(arr[i]=copy[i]){
            continue;
        }
        else{
            flag=0;
              break;
        }
    }
    return flag;
}
int main(){
    fast;
    int flag=1;
    int x;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        vector<int>my;
          
     for(int i=0;i<n;i++){
       cin>>a;
       my.push_back(a);
     }
    //  int flag=1;
    
      vector<int>copy;
    for(int i=0;i<n;i++){
        
            int a=my[i];
            copy.push_back(a);
        }
     int b=copy[0];
     for(int i=b;i>=0;i--){
           x=i;
         for(int j=0;j<n;j++){
            copy[j]=abs(copy[j]-i);
         }
         int c=check_sorted(my,n);
          if(c==0){
            continue;
          }
          else{
            flag==0;
            break;
          }
         }
     if(flag==0){
          cout<<x<<endl;
       }
       else{
        cout<<-1<<endl;
       }
     }
      
   
    }
