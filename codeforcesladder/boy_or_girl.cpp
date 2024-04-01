#include <bits/stdc++.h>
using namespace std;
// int main(){
//     // string str;
//     // cin>>str;
//     // int count=0;
//     // int count1=0;
//     // int f[256]={0};
//     // for(int i=0;i<str.length();i++){
//     //       f[str[i]]++;
//     // }
//     // for(int i=0;i<256;i++){
//     //      if(f[i]==1) {
//     //         count++;
//     //      }
//     //      if(f[i]==2){
//     //         count1++;
//     //      }
//     // }
//
// #include<iostream>
#include<algorithm>
#include<string>
// using namespace std;
int main()
{
    string str;
    int count = 0;
    cin >> str;
    sort(str.begin(), str.end());
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != str[i+1])
        {
            count++;
        }
    }
    if(count%2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}