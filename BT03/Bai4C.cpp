#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int tamgiac[n + 1][n + 1];
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == 0 || i + j == n)
                tamgiac[i][j] = 1;
            else
                tamgiac[i][j] = tamgiac[i + 1][j] + tamgiac[i + 1][j - 1];
        }
    }
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i + j <= n)
                cout << setw(5) << tamgiac[i][j];
        }
        cout << endl;
    }
}
