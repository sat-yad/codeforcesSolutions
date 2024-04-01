#include <iostream>
using namespace std;
int main(){
  string str;
    cin>>str;
    string s;
    for(int i=0;i<str.length();i++){
        // if(str[i]=='-' && str[i+1]=='.'){
        //     cout<<1;
        //++i;
        // }
        // else if(str[i]=='-' && str[i+1]=='-' ){
        // cout<<2;
        //++i;
        // }
        // else if(str[i]=='.')
        //    cout<<0;
        // }
        if(str[i]=='-'){
            if(str[i+1]=='-'){
                s+='2';
                i++;
            }
            else if(str[i+1]=='.'){
                s+='1';
                i++;
            }
        }
        else if(str[i]=='.'){
            s+='0';
        }
    }
    cout<<s<<endl;
}
  
