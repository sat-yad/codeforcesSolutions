#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
bool palindrome(string s){
    for(int i=0;i<(s.length()+1)/2;i++){
        if(s[i]!=s[s.length()-1-i]){
            return false;
        }
    }
    return true;
}
void solve() {
    int h,m;char ch;string s;
     cin >> h >> ch >> m;   
    while(true)
    {
        s = "";
        m++;
        if(m == 60)
        {
            m = 0;
            h++;
            h %= 24;
        }
        if(h <= 9 && h >= 0){
            s += '0', s += to_string(h);}
        else{
            s += to_string(h);}
        s +=':';
        if(m <= 9 && m >= 0){
            s += '0', s += to_string(m);}
        else{
            s += to_string(m);}
        if(palindrome(s)){
            cout<<s<<endl;
            break;}
    }
   }
int main(){
    fast;
 solve();
}
