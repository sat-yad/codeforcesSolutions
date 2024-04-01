#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w, x) for (ll i = w; i < x; i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cin.tie(nullptr);             \
    cout.tie(nullptr);
#define nl cout << "\n";
// #define onjudge                                              \
// #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); \
//     freopen("./output.txt", "w", stdout);                    \
// #endif

// void solve()
// {
//     ll int a, b, c;
//     cin >> a >> b >> c;

//     ll x=ceil((b + 1)) /(( b*b-a*a));
//     ll y= floor(ceil(((a * c * b * (b + 1)) / (a*a-b*b)))/(c));
//      if (abs(x) == 0 && abs(x) == 0)
//     {
//         cout << -1 << endl;
//     }
//     else
//      cout<<x<<" "<<y<<endl;
// //     cout << ceil((a * c * (b + 1)) / (pow(a, 2) - pow(b, 2))) * (-a * c) << " " <<  floor(ceil(((a * c * b * (b + 1)) / (pow(a, 2) - pow(b, 2))))/(c));
// }
void solve(){
    int c=0;
    char chess[8][8];
      for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>chess[i][j];
        }
      }
        for(int i=0;i<8;i++){
          int cnt=1;
        for(int j=0;j<8;j++){
             if(chess[i][j]!='B'){
                cnt=0;
             }
        }
        if(cnt==1){
            c++;
        }
      }
        for(int i=0;i<8;i++){
          int cnt=1;
        for(int j=0;j<8;j++){
             if(chess[j][i]!='B'){
                cnt==0;
             }
        } 
        if(cnt==1){
            c++;
        }
      }
      cout<<c-8<<endl;
}
int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}