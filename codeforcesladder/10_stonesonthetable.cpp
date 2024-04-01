#include <iostream>
using namespace std;
// int count(string str){
//     if(str.length()<=1){
//         return 0;
//     }

// }
int main(){
    int n;
    string ch;
    int count=0;
    cin>>n>>ch;
       for(int i=0;i<n;i++){
          if(ch[i]==ch[i+1]){
            count++;
          }
       }
   cout<<count<<endl;
}