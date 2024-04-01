#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 bool ans = false;
    string s1, s2;
    vector<string> days;
    days.push_back("sunday");
    days.push_back("monday");
    days.push_back("tuesday");
    days.push_back("wednesday");
    days.push_back("thursday");
    days.push_back("friday");
    days.push_back("saturday");
    vector<int> monthDays,firstMonthDay;
    monthDays.push_back(31);
    monthDays.push_back(28);
    monthDays.push_back(31);
    monthDays.push_back(30);
    monthDays.push_back(31);
    monthDays.push_back(30);
    monthDays.push_back(31);
    monthDays.push_back(31);
    monthDays.push_back(30);
    monthDays.push_back(31);
    monthDays.push_back(30);
    monthDays.push_back(31);
    cin >> s1 >> s2;
    int Day1 = 1;
    int Day2 = 1;
    for (int i = 0; i < 12 && !ans; ++i) {
        Day1 = Day2;
        Day2 += monthDays[i];
        for (int j = 0; j < 7 && !ans; ++j) {
            if (days[(Day1 + j) % 7] == s1 && days[(Day2 + j) % 7] == s2) {
                ans = true;
            }
        }
    }
    cout<<(ans ? "YES" : "NO");nl;
}
int main(){
    fast;
 solve();
}
