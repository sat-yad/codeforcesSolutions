#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
     cin>>s;
     cin>>t;
    //  int h1=stoi(s);
    //  int h=stoi(t);
     string h1=s.substr(0,2);
     int H1=stoi(h1);
     string t1=s.substr(3,2);
     int T1=stoi(t1);
     string h2=t.substr(0,2);
     int H2=stoi(h2);
     string t2=t.substr(3,2);
     int T2=stoi(t2);
     int Hdiff=H1-H2;
    //  cout<<Hdiff<<endl;
    int Tdiff=T1-T2;
   
   
    if(Tdiff<0){
        Tdiff +=60;
        Hdiff -=1;
    }
     if(Hdiff<0){
        Hdiff +=24;
    }
    
    string s1,s2;
    if(Hdiff<=9 && Hdiff>=0){
       s1="0"+to_string(Hdiff);
    }
     else{
     s1=to_string(Hdiff);
     }
     if(Tdiff<=9 && Tdiff>=0){
        s2="0"+to_string(Tdiff); 
    }
   else{
    
     s2=to_string(Tdiff);
   }
    cout<<s1<<":"<<s2<<endl;
     }

