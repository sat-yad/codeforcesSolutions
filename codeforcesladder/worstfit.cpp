#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of blocks\n";
    cin >> n;
    cout << "Enter the number of process\n";
    cin >> m;
    int v1[n], v2[m], v3[m];
    cout << "Enter the block size of each block\n";
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    cout << "Enter the process size of each process\n";
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
        v3[i] = -1;
    }
    sort(v1, v1 + n);
    for (int i = 0; i < m; i++)
    {
        if (v2[i] < v1[n - i])
        {
            v3[i] = n-i;
        }
    }
        cout << "-1 denotes that the memory is not allocated for some process\n";
        cout << "Process\t\tBlock\n";
        for (int i = 0; i < m; i++)
        {
            cout << v2[i] << "\t\t" << v3[i] << endl;
        }
    }