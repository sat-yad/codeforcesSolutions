#include <iostream>
#include<string>
using namespace std;
int main(){
    string str;
  
    cin>>str;
    int count1=0,count2=0;
    
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            count1++;
        }
        
        if(str[i]>='a' && str[i]<='z'){
            count2++;
        }
    }
    // cout<<count1<<endl;
    // cout<<count2<<endl;
    if(count2>=count1){
        for(int i=0;i<str.length();i++){
            str[i]=tolower(str[i]);
        }
        cout<<str<<endl;
    }
    else{
        for(int i=0;i<str.length();i++){
            str[i]=toupper(str[i]);
        }
        cout<<str<<endl;
    }
}