#include <bits/stdc++.h>
using namespace std;
#define ll long long
template <class T1, class T2, class Pred = std::less<T2>>
struct sort_pair_second
{
    bool operator()(const std::pair<T1, T2> &left, const std::pair<T1, T2> &right)
    {
        Pred p;
        return p(left.second, right.second);
    }
};
int main()
{
    // your code goes here
    ll t;
    cin >> t;

    while (t--)
    {
     
    }
    return 0;
}
