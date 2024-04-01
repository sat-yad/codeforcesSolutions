#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    int arr[n];
     int c=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
    c=c+b-a;
        arr[i]=c;
}
int max=0;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
       max=arr[i];
    }
  }
  cout<<max;
}