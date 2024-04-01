#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=2,m=3;
    // cin>>n>>m;
    int area=n*m;
    int a=min({n,m});
    int count=0;
    while(area!=a){
        count++;
        area-=a*a;
    }
    while(a!=0){
        count++;
        a--;
    }
     cout<<count;
}
