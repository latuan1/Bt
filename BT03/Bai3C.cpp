#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], ts[10];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < 10; i++)
        ts[i] = 0;
    for (int i = 0; i < n; i++)
        ts[a[i]]++;
    for (int i = 0; i < 10; i++)
    {
        cout << i << " : " << ts[i] << endl;
    }
}
