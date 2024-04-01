#include <iostream>
using namespace std;
int main(){
//     int n;
//     cin>>n;
  
//     while(n!=0){
//     if(n%10==  4||7){
//         n=n/10;
//     }
//    if(n%10 !=  4||7)
//         cout<<"NO"<<endl;
//         break;
//     }
//     cout<<"YES"<<endl;
//    long long n;
//     cin >> n;
//     int count = 0;
//     int d=0;
//     int c=n;
//     while(c!=0){
//         d++;
//         c=c/10;
//     }
//     bool b=true;
//     if(d==1 && n%10==4){
//         cout<<"YES"<<endl;
//     }
//     while (n != 0)
//     {
//         if (n % 10 == 4 || n % 10 == 7)
//         {
//             count += 1;
//         }
//         n /= 10;
//     }
//     if (count ==d ){
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
long long int n;
int c = 0;

cin >> n;

while(n)
{
if(n % 10 == 7 || n % 10 == 4)
c++;

n = n / 10;
}

if(c == 7 || c == 4)
cout <<"YES";
else
cout <<"NO";
 }
