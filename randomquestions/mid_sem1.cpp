#include <iostream>
using namespace std;
int main()
{
    string str;
cin>>str; 
string vowel="aeiou";
int arr[5]={0};
for(int i=0;i<5;i++)
{ 
    for(int j=0;j<str.length();j++)
    {
        if(vowel[i]==str[j])
        {arr[i]++;}
        
        }
        }
         for(int i=0;i<5;i++)
         {
             cout<<"frequency of"<<vowel[i]<<":"<<arr[i]<<endl;
             }
             }