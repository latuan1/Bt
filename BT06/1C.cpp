#include <iostream>

using namespace std;

int n,hang[100],cot[100],cheo1[100],cheo2[100];

void printkq()
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (j==hang[i])cout << "*";
            else cout << ".";
        }
        cout << endl;
    }
    cout << endl;
}

void test(int i)
{
    for (int j=0;j<n;j++)
    {
        if (cot[j]==1&&cheo1[i-j+n-1]==1&&cheo2[j+i]==1)
        {
            hang[i]=j;
            cot[j]=0;
            cheo1[i-j+n-1]=0;
            cheo2[j+i]=0;
            if (i==n-1)printkq();
            else test(i+1);
            cot[j]=1;
            cheo1[i-j+n-1]=1;
            cheo2[j+i]=1;
        }
    }
}

int main()
{
    cin >> n;
    for (int i=0;i<100;i++)
    {
        cot[i]=1;
        cheo1[i]=1;
        cheo2[i]=1;

    }
    test(0);
    return 0;
}
