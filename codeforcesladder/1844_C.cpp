#include <bits/stdc++.h>


using namespace std;

int main()
{
    long long  t;
    cin >> t;

    while (t--)
    {
        long long  n;
        cin >> n;
        vector<long long > a(n);

        for (auto& num : a)
        {
            cin >> num;
        }

        long long  evenSum = 0, oddSum = 0;

        for (long long  i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                evenSum += max(0ll, a[i]);
            else
                oddSum += max(0ll, a[i]);
        }

        long long  answer = max(evenSum, oddSum);

        if (answer == 0)
        {
            sort(a.begin(), a.end());
            answer = a[n - 1];
        }

        cout << answer << "\n";
    }

//     return 0;
}