#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// An 'L' indicates he should move one unit left.
//An 'R' indicates he should move one unit right.
//A 'U' indicates he should move one unit up.
//A 'D' indicates he should move one unit down.
void solve()
{
    string s;
    cin >> s;
    int n = s.size(), a = 0, b = 0;
    if (n % 2 == 0)
    {
        fl(0,n){
           if(s[i]=='L') a--;
           else if(s[i]=='R') a++;
           else if (s[i]=='U') b++;
           else if(s[i]=='D') b--;
        }
        cout<<(abs(a)+abs(b))/2;
}
else cout<<"-1";nl;
}
int main(){
    fast;
 solve();
}
