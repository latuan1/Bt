#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10005], b[10005];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    sort(a + 0, a + n);
    sort(b + 0, b + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= b[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << b[i] << endl;
    }
}