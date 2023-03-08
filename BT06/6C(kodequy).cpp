#include <iostream>

using namespace std;

int n,so[10];

void printkq()
{
    for (int i=0;i<n;i++)cout << so[i];
    cout << endl;
}

void swaP(int &a, int &b)
{
    int tg=a;
    a=b;
    b=tg;
}

void hoanvi()
{
    for (int i=0;i<n;i++)
    {
        for (int j=n-1;j>0;j--)
        {
            if (i==n-1&&j==1)break;
            swaP(so[j],so[j-1]);
            printkq();
        }
    }
}

int main()
{
    cin >> n;
    for (int i=0;i<n;i++)so[i]=i+1;
    printkq();
    hoanvi();
    return 0;
}
