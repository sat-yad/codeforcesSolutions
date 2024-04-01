#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[100];
    int last=n;
    bool flag=true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        while(flag){
       for(int i=0;i<n;i++){
        arr[i]-=m;
        if(arr[i]>0){
            last=i+1;
        }
       }
       for(int i=0;i<n;i++){
        if(arr[i]>m){
            flag=true;
            break;
        }
        else{
            flag =false;
        }
       }

        }
cout<<last;
}