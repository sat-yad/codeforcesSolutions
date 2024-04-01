#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    string str[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s[0]>='0' && s[0]<='9'){            
                int num=stoi(s);     
                if(num < 18) ans++;
            }
        else {
            for(int i=0;i<11;i++){
                if(str[i]==s) {
                    ans++;
                    break;
                };
            }
        }
    }
    cout << ans;nl;   
}
int main(){
    fast;
// ll t;
// cin>>t;
// while(){
 solve();
// }
}
// 5
// 18
// VODKA
// COKE
// 19
// 17
