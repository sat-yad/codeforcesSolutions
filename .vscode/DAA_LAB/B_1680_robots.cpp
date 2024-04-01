#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    cin>>t;
    while(t!=0){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            string str;
            int count=0;
            for(int i=0;i<m;i++){
                if(str[i]=='R'){
                    count++;
                }
                cin>>str[i];
            }
            if(count==0){
                cout<<"NO"<<endl;
            }
            break;
        }
    }
}