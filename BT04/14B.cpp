// Mystery Number

#include <iostream>
using namespace std;

int a[105];

int main()
{
    int n;
    cin >> n;
    int s = 0;
    for (int i = 0; i < n + n + 1; i++)
    {
        int t;
        cin >> t;
        s = s ^ t;
    }
    cout << s;
}
