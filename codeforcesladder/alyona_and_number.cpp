#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m;
    cin>>n>>m;
   ll count=0;
   for (int i = 1; i <= n; i++)
    {
        count += (m + (i % 5)) / 5;
        }
        cout << count;
}