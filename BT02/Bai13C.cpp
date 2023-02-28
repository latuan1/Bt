#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n)
{
    for (int i=2;i<n;i++)
    {
        if (n%i==0)return false;
    }
    return true;
}

bool Isshh(int n)
{
    int s=0;
    for (int i=1;i<n;i++)
    {
        if (n%i==0)s=s+i;
    }
    if (s==n)return true;
    else return false;
}

bool Isscp (int n)
{
    if ((int)sqrt(n)==sqrt(n))return true;
    else return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i=2;i<=n;i++)
    {
        if (IsPrime(i))cout << i << " ";
    }
    cout << endl;
    for (int i=2;i<=n;i++)
    {
        if (Isshh(i))cout << i << " ";
    }
    cout << endl;
    for (int i=2;i<=n;i++)
    {
        if (Isscp(i))cout << i << " ";
    }
    return 0;
}
