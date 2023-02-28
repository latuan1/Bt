#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i = 0, a[10000];
    double tb = 0, ps = 0, c = 5;
    while (cin >> n && c--)
    {
        a[i] = n;
        i++;
    }
    for (int j = 0; j < i; j++)
        tb = tb + 1.0 * a[j] / i;
    for (int j = 0; j < i; j++)
        ps = ps + 1.0 * (a[j] - tb) * (a[j] - tb) / i;
    cout << setprecision(2) << fixed << tb << endl
         << ps;
}
