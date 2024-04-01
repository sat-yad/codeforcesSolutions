#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while (t--)
     {
          int n;
          cin >> n;
          int d = n % 10;
          int c = n;
          int count = 0;
          while (c != 0)
          {
               count++;
               c /= 10;
          }
          int a = n / (pow(10, count - 1));
          cout << d + a;
     }
}