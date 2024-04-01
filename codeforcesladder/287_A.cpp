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

	int a[4][4] = {0};
	int b[4][4] = {0};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char c;
			cin >> c;
			if (c == '#')
				a[i][j] = 1;
			else
				b[i][j] = 1;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((a[i][j] ^ a[i][j + 1] ^ a[i + 1][j] ^ a[i + 1][j + 1]) || (a[i][j] == a[i + 1][j] && a[i][j] == a[i][j + 1] && a[i][j] == a[i + 1][j + 1]))
			{
				cout << "YES";
				return;
			}
		}
	}
	cout << "NO";
}
int main()
{
	fast;
	solve();
}
