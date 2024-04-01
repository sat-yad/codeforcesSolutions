// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fl(w, x) for (ll i = w; i < x; i++)
// #define fast                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cin.tie(nullptr);             \
//     cout.tie(nullptr);
// #define nl cout << "\n";
// #define onjudge                                              \
// #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); \
//     freopen("./output.txt", "w", stdout);                    \
// #endif
// void solve()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     swap(a[0], a[n - 1]);
//     sort(a + 1, a + n);
//     if (a[0] == a[1])
//     {
//         cout << "NO" << endl;
//         return;
//     }
//     cout << "YES" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     fast;
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,flag=0;
//         cin>>n;
//         string s;
//          cin>>s;
//         if(n!=5)
//         {cout<<"NO";return 0;}
//             for(int i=0;i<n;i++)
//             {
//                 if(s[i]=='T'||s[i]=='i'||s[i]=='m'||s[i]=='u'||s[i]=='r')
//                 {
//                     flag=1;
//                     continue;
//                 }
//                 else{
//                     flag=0;
//                     break;
//                 }
//             }
//         if(flag==0) cout<<"NO"<<endl;
//         else cout<<"YES"<<endl;
// }
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    // vector<string> ch;
    // ch.push_back(Timur);
    // ch.push_back("miurT");
    // ch.push_back("Trumi");
    // ch.push_back("mriTu");
 int n,flag=0,c1=0,c2=0,c3=0,c4=0,c5=0;
        cin>>n;
        string s;
         cin>>s;
        if(n!=5)
        {cout<<"NO";nl;return ;}
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='T'){c1++;}
                if(s[i]=='i'){c2++;}
                if(s[i]=='m'){c3++;}
                if(s[i]=='u'){c4++;}
                if(s[i]=='r'){c5++;}
            }
       if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1){cout<<"YES";nl}
       else{cout<<"NO";nl;}
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}