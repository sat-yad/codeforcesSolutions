#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
    int n,m;
    cin >> n >> m ;
    vector <int> set(n);
 
    for(int i=0 ; i<n ; i++){
        cin >> set[i];
    }
    sort(set.begin(),set.end());
    int sum=0;
    for(int i=0 ; i<n && i<m ; i++)
    {
        if(set[i]>0)break;
        sum+=set[i];
    }
    cout << abs(sum) << endl;
}
int main(){
    fast;
 solve();
}