#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
   int t;
   cin>>t;
   
    string ch="Timur";
    sort(ch.begin(),ch.end());

  while(t--){
    string s;
    int n;
     cin>>n;
     cin>>s;
    //  int N=s.length();
    //  if(N!=n){
    //       cout<<"No"<<endl;
    //  }
    //  else{
        sort(s.begin(),s.end());
        if(s==ch){
            cout<<"Yes"<<endl;
    
        }
        else{
            cout<<"No"<<endl;
        }
     }
  }
    
