#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin >> n;
    cout << n << " ";
    while (n!=-1)
    {
        x=n;
        cin >> n;
        if (n!=x)cout << n << " ";
    }
}
