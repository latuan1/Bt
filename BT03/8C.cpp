#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    int tg[n];
    for (int i = 0; i < n; i++)
        cin >> tg[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (tg[j] > tg[j + 1])
            {
                int doi = tg[j];
                tg[j] = tg[j + 1];
                tg[j + 1] = doi;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        s = s + (n - 1 - i) * tg[i];
    }
    cout << s;
}
