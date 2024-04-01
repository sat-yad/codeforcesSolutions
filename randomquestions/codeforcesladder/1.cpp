#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n<=1){
      cout<<-1<<endl;
    }
    else{
    int count=0;
      for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
        if(arr[i]<arr[j]){
             int temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
              count++;
        }
        }
      }
      cout<<count<<endl;
    }
}