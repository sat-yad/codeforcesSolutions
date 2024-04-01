#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
           int n;
           cin>>n;
           int a;
          int  count1=0;
          int  count2=0;
                for(int i=1;i<=n;i++){
                cin>>a;
                if(a==5){
                    count1++;
                }
                else{
                    count2++;
                }
                }
                int b=count1/9;
                if(b==0){
                    if(count2>0){
                        cout<<0<<endl;
                    }
                    else{
                        cout<<-1<<endl;
                    }
                }
                else{
                    if(count2>0){
                    for(int i=1;i<=9*b;i++)
                    {
                        cout<<5;
                    }
                    for(int i=1;i<=count2;i++){
                        cout<<0;
                    }
                    }
                    else{
                        cout<<-1;
                    }
                }
            
     }