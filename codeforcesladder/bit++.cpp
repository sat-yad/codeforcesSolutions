#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    string str;
    while(n!=0){
        cin>>str;
        if(str=="X++" || str=="++X"){
            x=x+1;
        }
        if(str=="X--" || str=="--X"){
            x=x-1;
        }
        n--;
    }
    cout<<x;
}
