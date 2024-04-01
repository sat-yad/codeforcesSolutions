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
#define onjudge                                              \
#ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); \
	freopen("./output.txt", "w", stdout);                    \
#endif
void solve()
{
	string s, x, y, z;
	cin >> s;
	int flag = 0;
	for (int i = 1; i < s.length(); i++)
	{
		for (int j = i + 1; j < s.length(); j++)
		{
			// string a = s.substr(0, i + 1);
			// string b = s.substr(i + 1, j - i - 1);
			// string c = s.substr(j);
			// if (b <= a && b <= c || b >= a && b >= c)
			// {
			// 	cout << a << " " << b << " " << c << endl;
			// 	return;
			// }
			  x=s.substr(0,i);
			y=s.substr(i,j-i);
			  z=s.substr(j,s.length()-j-1+i);
			// cout<<x<<endl;
			// cout<<y<<endl;
			// cout<<z<<endl;
			  if(x>=y && y<=z){
			         cout<<x<<" "<<y<<" "<<z<<endl;
			        return;
			  }
			  else if(x<=y && y>=z){
			    cout<<x<<" "<<y<<" "<<z<<endl;
				return;
			  }
		}
	}
	cout<<":(\n";
}
int main()
{
	fast;
	ll t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}