#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
set<string> st;
void solve() {
    int n,ind=0;cin >> n;
    map<string,int> mp;
    while (n > 0){
        vector<int> a(27);
        string str, str2;cin >> str;
        int l = str.size();
        for (int i=0;i<l;i++){
            int x=str[i]-'a';
            a[x]++;
        }
        for (int i=0;i<26;i++){
            if (a[i]>0) str2+=i+'a';
        }
        map<string,int>::iterator i;
        i=mp.find(str2);
        if(i==mp.end()){
            mp.insert({str2,ind});
            ind++;
        }
        n--;
    }
    cout<<ind<<endl;
}
int main(){
    fast;
 solve();

}
