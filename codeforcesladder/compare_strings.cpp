#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s1[100001],s2[100001],arr[2],brr[2];
    int l1,l2,i,j=0,cnt=0;
    cin>>s1>>s2;
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1!=l2){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        for(i=0;i<l1;i++){
            if(s1[i]!=s2[i]){
                cnt++;
                arr[j]=s1[i];
                brr[j]=s2[i];
                j++;
                if(cnt>2){
                   cout<<"NO"<<endl;
                   return 0;
                }
            }
        }
    }
    if(arr[1]==brr[0]&&arr[0]==brr[1]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}