#include <iostream>
#include <cmath>

using namespace std;

void sx(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

int s(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            s = s + a[i];
    }
    return s;
}

int demle(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            dem++;
    }
    return dem;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sx(a, n);
    cout << a[n - 1] << endl
         << a[0] << endl
         << s(a, n) << endl
         << demle(a, n);
}
