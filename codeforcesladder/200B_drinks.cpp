#include <iostream>
using namespace std;
int main(){
    int n;
    int a;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
    cin>>a;
    sum=sum+a;
    }
    
  double d=(double)sum/n;
   
  cout<<d<<endl;
       
}