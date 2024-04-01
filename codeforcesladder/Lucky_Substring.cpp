#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
    string s;
    cin>>s;
   ll count1=0,count2=0,count3;
     for(ll i=0;i<s.size();i++){
     if(s[i]=='4'){
         count1++;
     }
     else if(s[i]=='7'){
        count2++;
     }
     else if( s[i]=='0'){
     count3++;
     }
     }
      if((count1==0 && count2==0) || count3==s.size()){
        cout<<-1<<endl;
     }
      else if(count1>=count2){
        cout<<4<<endl;
     }
     else if(count1<count2){
        cout<<7<<endl;
     }
}

int main(){
    fast;
 solve();
}