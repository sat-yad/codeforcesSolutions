#include <iostream>
using namespace std;
// int digit(int n){
//   if(n<10){
//     return n;
//   }
//    if(n%10!=digit(n/10));
// }
// int main(){
//     int n;
//     cin>>n;
//     int i=n+1;
//    while(i<=9000){
//       int a=i/10;
//       int b=i/100;
//       int c=i/1000;
//       int d=i/10000;
//       if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
       
//         break;
//       }
//       else{
//         i++;
//       }
//     }
//      cout<<i<<endl;
// }
//4022146   Jul 4, 2013 8:34:23 PM	fuwutu	 271A - Beautiful Year	 GNU C++0x	Accepted	15 ms	0 KB
// #include <iostream>

// using namespace std;

int main()
{
    int y;
    cin >> y;
    while (true)
    {
        y += 1;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
}