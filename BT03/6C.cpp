#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            a[i][j] = 0;
        }
    }
    int d = 1;
    int i = n / 2, j = n - 1;
    for (d = 1; d <= n * n; d++)
    {
        if (a[i][j] == 0)
            a[i][j] = d;
        else
        {
            i = (i - 1 + n) % n;
            j = (j - 1 + n) % n;
            j = (j - 1 + n) % n;
            a[i][j] = d;
        }
        i = (i + 1) % n;
        j = (j + 1) % n;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << setw(4) << (a[i][j]);
    //     }
    //     cout << endl;
    // }
    for (int j = n - 1; j >= 0; j--)
    {
        for (int i = 0; i < n; i++)
        {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}