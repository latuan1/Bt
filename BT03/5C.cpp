#include <bits/stdc++.h>
using namespace std;

int a[100][100];

void giam(int x1, int y1, int x2, int y2, int &cur);

void tang(int x1, int y1, int x2, int y2, int &cur)
{
    for (int i = x1; i <= x2; i++)
    {
        a[y1][i] = cur++;
    }

    for (int i = y1 + 1; i <= y2; i++)
    {
        a[i][x2] = cur++;
    }

    if (x1 < x2 && y1 < y2)
    {
        y1++;
        x2--;
        giam(x1, y1, x2, y2, cur);
    }
}

void giam(int x1, int y1, int x2, int y2, int &cur)
{
    for (int i = x2; i >= x1; i--)
    {
        a[y2][i] = cur++;
    }

    for (int i = y2 - 1; i >= y1; i--)
    {
        a[i][x1] = cur++;
    }

    if (x1 < x2 && y1 < y2)
    {
        y2--;
        x1++;
        tang(x1, y1, x2, y2, cur);
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    int x1 = 0, y1 = 0, x2 = n - 1, y2 = m - 1, cur = 1;
    tang(x1, y1, x2, y2, cur);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}