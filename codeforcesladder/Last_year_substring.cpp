#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == '2' and s[n - 1] == '0' and s[n - 2] == '2' and s[n - 3] == '0'){
     cout << "YES" << endl;
    }
    else if (s[0] == '2' and s[1] == '0' and s[n - 2] == '2' and s[n - 1] == '0') {
    cout << "YES" << endl;
     }
    else if (s[0] == '2' and s[1] == '0' and s[2] == '2' and s[n - 1] == '0') {
     cout << "YES" << endl;
     }
    else if (s[0] == '2' and s[1] == '0' and s[2] == '2' and s[3] == '0'){
    cout << "YES" << endl;
    }
    else if (s[n - 1] == '0' and s[n - 2] == '2' and s[n - 3] == '0' and s[n - 4] == '2'){
    cout << "YES" << endl;
        }
    else{
     cout << "NO" << endl;
    }
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}