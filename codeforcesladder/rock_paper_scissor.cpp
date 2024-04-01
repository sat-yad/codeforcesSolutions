#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif

//  rock breaks the scissors, the scissors cut the paper, and the paper gets wrapped over the stone.
// i was having a very rough and suddenly caught by someone on that day i was going throuh the woods i
void solve() {
   string a,b,c;
   cin>>a>>b>>c;
   int n1,n2,n3;
   if(a=="rock"){ n1=1;}
   if(a=="paper"){ n1=2;}
   if(a=="scissors"){n1=3;}
   if(b=="rock"){ n2=1;}
   if(b=="paper"){ n2=2;}
   if(b=="scissors"){n2=3;}
   if(c=="rock"){ n3=1;}
   if(c=="paper"){n3=2;}
   if(c=="scissors"){n3=3;}
   int flag=1;
   if(n1==1 && n2==3 && n3==3){
    cout<<"F"<<endl;
    flag=0;
   }
   if(n1==2 && n2==1 && n3==1){
    cout<<"F"<<endl;
    flag=0;
   }
   if(n1==3 && n2==2 && n3==2){
    cout<<"F"<<endl;
    flag=0;
   }
   if(n2==1 && n1==3 && n3==3){
    cout<<"M"<<endl;
    flag=0;
   }
   if(n2==2 && n1==1 && n3==1){
    cout<<"M"<<endl;
    flag=0;
   }
   if(n2==3 && n1==2 && n3==2){
    cout<<"M"<<endl;
    flag=0;
   }
   if(n3==1 && n1==3 && n2==3){
    cout<<"S"<<endl;
    flag=0;
   }
   if(n3==2 && n1==1 && n2==1){
    cout<<"S"<<endl;
    flag=0;
   }
   if(n3==3 && n1==2 && n2==2){
    cout<<"S"<<endl;
    flag=0;
   }
   if(flag==1){
   cout<<"?"<<endl;}
}
int main(){
    fast;
 solve();
}
