#include <iostream>

using namespace std;

int n,so[100],check[100];

void printkq()
{
    for (int i=0;i<n;i++)cout << so[i];
    cout << endl;
}

void test(int i)
{
    for (int j=1;j<=n;j++)
    {
        if (check[j]==1)
        {
            so[i]=j;
            check[j]=0;
            if (i==n-1)printkq();
            else test(i+1);
            check[j]=1;
        }
    }
}

int main()
{
    cin >> n;
    for (int i=0;i<100;i++)check[i]=1;
    test(0);
    return 0;
}
