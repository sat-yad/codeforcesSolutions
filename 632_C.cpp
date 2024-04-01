// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // #define ll               long long
// // // #define uin              unsigned int
// // // #define ull              unsigned long long
// // // #define ld               long double 
// // // #define fl(i,w,n)        for(ll i=w;i<n;i++)
// // // #define rfl(i,w,n)       for(ll i=w;i>=n;i--)
// // // #define  F              first
// // // #define  S             second
// // // #define  B              begin()
// // // #define  E               end()
// // // #define EB               emplace_back
// // // #define PB               push_back
// // // #define P                pop()
// // // #define PRES(c,x)        ((c).find(x)!=(c).end())
// // // #define all(x)           x.begin(), x.end()
// // // typedef vector<string>   vs;
// // // typedef pair<int,int>    pii;
// // // typedef pair<ll,ll>      pll;
// // // typedef vector<int>      vi;
// // // typedef vector<ll>       vl;
// // // typedef vector<vi>       vvi;
// // // typedef vector<vl>       vvl;
// // // typedef vector<pii>      vpii;
// // // typedef vector<pll>      vpll;
// // // #define um(x, y)          unordered_map<x, y>
// // // #define us(x)             unordered_set<x>
// // // #define mp                  map ii 
// // // #define mpl                 map lii
// // // #define mem1(a)                memset(a,-1,sizeof(a))
// // // #define mem0(a)                memset(a,0,sizeof(a))
// // // #define sum(a)          ( accumulate ((a).begin(), (a).end(), 0ll))
// // // #define mine(a)         (*min_element((a).begin(), (a).end()))
// // // #define maxe(a)         (*max_element((a).begin(), (a).end()))
// // // #define mini(a)         ( min_element((a).begin(), (a).end()) - (a).begin())
// // // #define maxi(a)          ( max_element((a).begin(), (a).end()) - (a).begin())
// // // #define lowb(a, x)      ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
// // // #define uppb(a, x)      ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
// // // #define nl               <<"\n";
// // // #define nll              cout<<"\n";
// // // #define Yes              cout<<"Yes"<<"\n";
// // // #define No               cout<<"No"<<"\n";
// // // #define PI               3.1415926535897932384626
// // // #define SET(n)           cout << fixed << setprecision(n)
// // // #define get(s)              getline(cin, s)
// // // #define ppc                 __builtin_popcount
// // // #define ppcll               __builtin_popcountll
// // // #define clz                 __builtin_clz   
// // // #define clzll               __builtin_clzll
// // // #define ctz                 __builtin_ctz
// // // #define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
// // // #define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// // // bool comp(string a, string b){ return (a+b)<(b+a);}
// // // const ll mod=1000000007;
// // // void solve() {
// // //   ll n;cin>>n;
// // //   string s[n];
// // //   fl(i,0,n) cin>>s[i];
// // //   sort(s,s+n,comp);
// // //   fl(i,0,n) cout<<s[i];
// // // }
// // // int main(){
// // //   fast;
// // // // ll t;
// // // // cin>>t;
// // // // while(t--){
// // //  solve();
// // // // }
// // // }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uin unsigned int
#define ull unsigned long long
#define ld long double
#define rep(i, start, n) for (ll i = start; i < n; i++)
#define rloop(i, start, n) for (ll i = start; i >= n; i--)
#define f first
#define s second
#define B begin()
#define E end()
#define eb emplace_back
#define pb push_back
#define pp pop_back
#define P pop()
#define PRES(c, x) ((c).find(x) != (c).end())
#define all(x) x.begin(), x.end()
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
#define um(x, y) unordered_map<x, y>
#define us(x) unordered_set<x>
// #define mp map ii
#define mpl map lii
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define sum(a) (accumulate((a).begin(), (a).end(), 0ll))
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))
#define mini(a) (min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a) (max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x) (lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) (upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define nl << "\n";
#define nll cout << "\n";
#define yes cout << "Yes" \
								 << "\n";
#define no cout << "No" \
								<< "\n";
#define debug cout << "ans : ";
#define PI 3.1415926535897932384626
#define SET(n) cout << fixed << setprecision(n)
#define get(s) getline(cin, s)
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
#define clz __builtin_clz
#define clzll __builtin_clzll
#define ctz __builtin_ctz
#define debug cout << "ans : ";
#define fast                    \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cin.tie(nullptr);             \
	cout.tie(nullptr);
#define onjudge                                            \
	#ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); \
	freopen("./output.txt", "w", stdout);                    \
	#endif
const ll mod = 1000000007;
const int N = 26;

typedef unsigned long long int ul;
static bool compare(string a, string b)
{
	return a + b < b + a;
}
template <typename T>
void print(vector<T> &v)
{
	rep(i, 0, v.size())
					cout
			<< v[i] << " ";
	cout << endl;
}
void solve()
{
	int n;
	cin >> n;
	vector<int> v,ans;
	vector<pair<int,char>>arr;
			set<int>s;
      map<int,int> m;
	while (n--)
	{
    // cout<<"ok159"<<endl;
		int x;
    string str;
		cin>>str;
    // getline(cin,str);
    // cout<<"str : "<<str.size()<<endl;
    // c=str[0];
		if (str == "+")
		{
      cin>>x;
      // cout<<str<<endl;
      // x=str[2]-'0';
			v.pb(x);
      m[x]++;
      // s.insert(x);
			arr.push_back({x,str[0]});
    // cout<<arr.size()<<endl;
    // cout<<"ok171"<<endl;

		}
		else if (str == "-")
		{
      cin>>x;
      // cout<<str<<endl;
    //   // x=str[2]-'0';
      arr.push_back({x,str[0]});
			while(v.size()&&x--)
			{
        if(m[v[v.size()-1]]==1)m.erase(v[v.size()-1]);
        else m[v[v.size()-1]]--;
				v.pop_back();
			}
    // cout<<"ok183"<<endl;

		}
		else if(str=="?")
		{
      // cout<<str<<endl;
			// for(int i=0;i<v.size();i++)
			// {
			// 	s.insert(v[i]);
			// }
			cout<<m.size()<<endl;
      // ans.push_back(s.size());
    // cout<<"ok196"<<endl;

		}
		else if (str == "!")
		{
      // cout<<str<<endl;
			int k=arr.size();
      // cout<<k<<endl;
			char back=arr[k-1].second;
			int value=arr[k-1].first;
			if(back=='+')
			{

        if(m[v[v.size()-1]]==1)m.erase(v[v.size()-1]);
        else m[v[v.size()-1]]--;
				v.pop_back();
			}
			else if(back=='-')
			{
        // x=str[2];
				value++;
				while(arr.size()&&value--)
				{
          v.push_back(arr[arr.size()-2].first);
          m[arr[arr.size()-2].first]++;
					arr.pop_back();
				}
			}
		}
	}   
  // for(auto i:ans){cout<<i;nll;}
}
int main()
{
// 	fast;
// 	ll t = 1;
// 	// cin >> t;
// 	while (t--)
// 	{
// 		solve();
// 	}
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define uin unsigned int
// #define ull unsigned long long
// #define ld long double
// #define rep(i, start, n) for (ll i = start; i < n; i++)
// #define rloop(i, start, n) for (ll i = start; i >= n; i--)
// #define f first
// #define s second
// #define B begin()
// #define E end()
// #define eb emplace_back
// #define pb push_back
// #define pp pop_back
// #define P pop()
// #define PRES(c, x) ((c).find(x) != (c).end())
// #define all(x) x.begin(), x.end()
// typedef vector<string> vs;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;
// typedef vector<pii> vpii;
// typedef vector<pll> vpll;
// #define um(x, y) unordered_map<x, y>
// #define us(x) unordered_set<x>
// // #define mp map ii
// #define mpl map lii
// #define mem1(a) memset(a, -1, sizeof(a))
// #define mem0(a) memset(a, 0, sizeof(a))
// #define sum(a) (accumulate((a).begin(), (a).end(), 0ll))
// #define mine(a) (*min_element((a).begin(), (a).end()))
// #define maxe(a) (*max_element((a).begin(), (a).end()))
// #define mini(a) (min_element((a).begin(), (a).end()) - (a).begin())
// #define maxi(a) (max_element((a).begin(), (a).end()) - (a).begin())
// #define lowb(a, x) (lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
// #define uppb(a, x) (upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
// #define nl << "\n";
// #define nll cout << "\n";
// #define yes cout << "Yes" \
// 								 << "\n";
// #define no cout << "No" \
// 								<< "\n";
// #define debug cout << "ans : ";
// #define PI 3.1415926535897932384626
// #define SET(n) cout << fixed << setprecision(n)
// #define get(s) getline(cin, s)
// #define ppc __builtin_popcount
// #define ppcll __builtin_popcountll
// #define clz __builtin_clz
// #define clzll __builtin_clzll
// #define ctz __builtin_ctz
// #define debug cout << "ans : ";
// #define fast                    \
// 	ios_base::sync_with_stdio(0); \
// 	cin.tie(0);                   \
// 	cin.tie(nullptr);             \
// 	cout.tie(nullptr);
// #define onjudge                                            \
// 	#ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); \
// 	freopen("./output.txt", "w", stdout);                    \
// 	#endif
// const ll mod = 1000000007;
// const int N = 26;

// typedef unsigned long long int ul;
// static bool compare(string a, string b)
// {
// 	return a + b < b + a;
// }
// template <typename T>
// void print(vector<T> &v)
// {
// 	rep(i, 0, v.size())
// 					cout
// 			<< v[i] << " ";
// 	cout << endl;
// }
// void solve()
// {
// 	int n;
// 	cin >> n;
// 	vector<int> v;
// 	while (n--)
// 	{
// 		ll x;char c;
	
// 		vector<pair<char, int> >arr;
// 		cin >>c;
// 	    if(c=='+'|| c=='-')
// 	    {
// 	        cin>>x;
// 	    }
// 		if (c == '+')
// 		{
// 			v.pb(x);
// 			arr.push_back({x,c});
// 		}
// 		else if (c == '-')
// 		{
// 		    arr.push_back({x,c});
// 			while(x--)
// 			{
// 				v.pop_back();
// 			}
// 		}
// 		else if(c=='?')
// 		{
// 			set<int>s;
// 			print(v);
// 			for(int i=0;i<v.size();i++)
// 			{
// 				s.insert(v[i]);
// 			}
// 			debug;
// 			cout<<s.size()<<endl;
// 		}
// 		else if (c == '!')
// 		{
		 
// 			int k=arr.size();
// 			char back=arr[k-1].second;
// 			int value=arr[k-1].first;
// 			if(back=='+')
// 			{
// 				v.pop_back();
// 			}
// 			else if(back=='-')
// 			{
// 				value++;
// 				while(value--)
// 				{
// 					arr.pop_back();
// 				}
// 			}
// 			 print(v);
// 		}
// 	}
// }
// int main()
// {
// 	fast;
// 	ll t = 1;
// 	// cin >> t;
// 	while (t--)
// 	{
// 		solve();
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define uin unsigned int
// #define ull unsigned long long
// #define ld long double
// #define rep(i, start, n) for (ll i = start; i < n; i++)
// #define rloop(i, start, n) for (ll i = start; i >= n; i--)
// #define f first
// #define s second
// #define B begin()
// #define E end()
// #define eb emplace_back
// #define pb push_back
// #define pp pop_back
// #define P pop()
// #define PRES(c, x) ((c).find(x) != (c).end())
// #define all(x) x.begin(), x.end()
// typedef vector<string> vs;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;
// typedef vector<pii> vpii;
// typedef vector<pll> vpll;
// #define um(x, y) unordered_map<x, y>
// #define us(x) unordered_set<x>
// // #define mp map ii
// #define mpl map lii
// #define mem1(a) memset(a, -1, sizeof(a))
// #define mem0(a) memset(a, 0, sizeof(a))
// #define sum(a) (accumulate((a).begin(), (a).end(), 0ll))
// #define mine(a) (*min_element((a).begin(), (a).end()))
// #define maxe(a) (*max_element((a).begin(), (a).end()))
// #define mini(a) (min_element((a).begin(), (a).end()) - (a).begin())
// #define maxi(a) (max_element((a).begin(), (a).end()) - (a).begin())
// #define lowb(a, x) (lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
// #define uppb(a, x) (upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
// #define nl << "\n";
// #define nll cout << "\n";
// #define yes cout << "Yes" \
// 								 << "\n";
// #define no cout << "No" \
// 								<< "\n";
// #define debug cout << "ans : ";
// #define PI 3.1415926535897932384626
// #define SET(n) cout << fixed << setprecision(n)
// #define get(s) getline(cin, s)
// #define ppc __builtin_popcount
// #define ppcll __builtin_popcountll
// #define clz __builtin_clz
// #define clzll __builtin_clzll
// #define ctz __builtin_ctz
// #define debug cout << "ans : ";
// #define fast                    \
// 	ios_base::sync_with_stdio(0); \
// 	cin.tie(0);                   \
// 	cin.tie(nullptr);             \
// 	cout.tie(nullptr);
// #define onjudge                                            \
// 	#ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); \
// 	freopen("./output.txt", "w", stdout);                    \
// 	#endif
// const ll mod = 1000000007;
// const int N = 26;

// typedef unsigned long long int ul;
// static bool compare(string a, string b)
// {
// 	return a + b < b + a;
// }
// template <typename T>
// void print(vector<T> &v)
// {
// 	rep(i, 0, v.size())
// 					cout
// 			<< v[i] << " ";
// 	cout << endl;
// }
// void solve()
// {
// 	int n;
// 	cin >> n;
// 	vector<int> v;
// 	while (n--)
// 	{
// 		ll x;char c;
	
// 		vector<pair<int,char> >arr;
// 		cin >>c;
// 	    if(c=='+'|| c=='-')
// 	    {
// 	        cin>>x;
// 	    }
// 		if (c == '+')
// 		{
// 			v.pb(x);
// 			arr.push_back({x,c});
// 		}
// 		else if (c == '-')
// 		{
// 		    arr.push_back({x,c});
// 			while(x--)
// 			{
// 				v.pop_back();
// 			}
// 		}
// 		else if(c=='?')
// 		{
// 			set<int>s;
// 			print(v);
// 			for(int i=0;i<v.size();i++)
// 			{
// 				s.insert(v[i]);
// 			}
// 			debug;
// 			cout<<s.size()<<endl;
// 		}
// 		else
// 		{
// 		    yes;
// 			int k=arr.size();
// 			int value=arr[k-1].first;
// 			char back=arr[k-1].second;
// 			if(back=='+')
// 			{
// 				v.pop_back();
// 			}
// 			else if(back=='-')
// 			{
// 				value++;
// 				while(value--)
// 				{
// 					v.pop_back();
// 				}
// 			}
// 		}
// // 		print(v);
// // 		nll;
// 	}
// }
// int main()
// {
// 	// fast;
// 	ll t = 1;
// 	// cin >> t;
// 	while (t--)
// 	{
// 		solve();
// 	}
// }


