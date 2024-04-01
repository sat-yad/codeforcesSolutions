#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    bool flag;
  
    for (int i = 1; i < 10; i++)
    {
            if ((a * 10 + i) % b == 0)
        {
            cout << a * 10 + i;
            string s(n - 1, i);
            cout << s << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << -1 << endl;
    }
}