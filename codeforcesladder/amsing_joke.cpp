#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string str1;
    string str2;
    string str3;
    cin>>str1;
    cin>>str2;
    cin>>str3;
     string s;
     s=str1+str2;
     sort(s.begin(),s.end());
     sort(str3.begin(),str3.end());
     if(str3==s){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
}