#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     int c=0;
    while(n--){
        int x1,x2,y1,y2;
       
        cin>>x1>>y1>>x2>>y2;
        c+=(abs(x1-x2)+1)*(abs(y1-y2)+1);
    }
    cout<<c;
} 