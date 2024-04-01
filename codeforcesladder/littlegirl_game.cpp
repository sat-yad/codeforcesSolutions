#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[30]={0};
    for(int i=0;i<s.length();i++){
       arr[s[i]-'a']++;
    }
    int count=0;
        for(int i=0;i<26;i++){
           if(arr[i]&1){
            count++;
           }
        }
        if(count&1 || count==0){
            cout<<"First"<<endl;
        }
        else{
               cout<<"Second"<<endl;
        }
}