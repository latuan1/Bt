#include <iostream>

using namespace std;

int main()
{
    int n,i=1;
    cin >> n;
    int a[1000];
    a[0]=1;
    a[1]=1;
    while (a[i]<n)
    {
        i++;
        a[i]=a[i-1]+a[i-2];
    }
    if (a[i]==n)
    {
        cout << "Thuoc day Fibonacci" << endl;
        for (int j=0;j<=i;j++)cout << a[j] << " ";
    }
    else
    {
        cout << "Khong thuoc day Fibonacci" << endl;
        for (int j=0;j<i;j++)cout << a[j] << " ";
    }
    return 0;
}
