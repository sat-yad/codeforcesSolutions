#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int c;
    cin >> c;
    int n = c;
    if (c % 2 == 0)
    {
        cout << (n / 2) * n << endl;
        while (c != 0)
        {
            if (c % 2 == 0)
            {
                for (int i = 1; i <= n; i++)
                {
                    if (i % 2 == 0)
                    {
                        cout << "C";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    if (i % 2 == 1)
                    {
                        cout << "C";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            c--;
            cout << endl;
        }
    }
    else
    {
        cout << ((n + 1) * (n + 1) / 4) + ((n - 1) * (n - 1) / 4) << endl;
        while (c != 0)
        {
            if (c % 2 == 1)
            {
                for (int i = 1; i <= n; i++)
                {
                    if (i % 2 == 1)
                    {
                        cout << "C";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    if (i % 2 == 0)
                    {
                        cout << "C";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            c--;
            cout << endl;
        }
    }
}
