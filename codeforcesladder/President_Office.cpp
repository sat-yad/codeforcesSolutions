#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
     set<char> adj;
  int n,m;
  char c;
  cin>>n>>m>>c;
  string room[n];
  for(int i=0;i<n;i++)
    cin>>room[i];
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          if(room[i][j]==c)
            {
              if(i!=0&&room[i-1][j]!=c)
                adj.insert(room[i-1][j]);
              if(i!=n-1&&room[i+1][j]!=c)
                adj.insert(room[i+1][j]);
              if(j!=0&&room[i][j-1]!=c)
                adj.insert(room[i][j-1]);
              if(j!=m-1&&room[i][j+1]!=c)
                adj.insert(room[i][j+1]);
            }
        }
    }
  int x=0;
  if(adj.find('.')!=adj.end())
    x--;
  cout<<adj.size()+x<<endl;
}
int main(){
    fast;
 solve();
}
