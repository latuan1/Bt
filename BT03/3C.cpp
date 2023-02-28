#include <iostream>

using namespace std;

bool sotrangguong(int n)
{
    if (n == 0)
        return true;
    if (n >= 100000)
        return false;
    int chuso[5], i = 0;
    while (n > 0 && i < 5)
    {
        chuso[i] = n % 10;
        n = n / 10;
        i++;
    }
    for (int j = 0; j <= (i - 1) / 2; j++)
    {
        if (chuso[j] != chuso[i - 1 - j])
            return false;
    }
    return true;
}

int main()
{
    int n, a, b;
    cin >> n;
    while (n > 0)
    {
        int dem = 0;
        cin >> a >> b;
        n--;
        for (int i = a; i <= b; i++)
        {
            if (sotrangguong(i))
                dem++;
        }
        cout << dem << endl;
    }
}
