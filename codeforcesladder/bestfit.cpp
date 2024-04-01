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
    for (int i = 0; i < n; i++)
    {
        int k = -1;
        for (int j = 0; j < m; j++)
        {
            if (v2[i] <= v1[j])
            {
                if (k == -1)
                    k = j;
            }
            else
            {
                if (v1[k] > v1[j])
                    k = j;
            }
        }
        if (k != -1 && v2[i] <= v1[k])
        {
            v1[k] = 0;
            v3[i]=k+1;
        }
    }
    cout << "-1 denotes that the memory is not allocated for some process\n";
    cout << "Process\t\tBlock\n";
    for (int i = 0; i < m; i++)
    {
        cout << v2[i] << "\t\t" << v3[i] << endl;
    }
}
// 5
// 4
// 12 34 56 78 89
// 6 35 45 79