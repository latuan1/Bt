#include <iostream>

using namespace std;

int n,k,chucai[30];

void printkq()
{
    for (int i=1;i<=k;i++)cout << (char)chucai[i];
    cout << endl;
}

void test(int i)
{
    for (int j=97;j<=97+n;j++)
    {
        if (j>chucai[i-1])
        {
            chucai[i]=j;
            if (i==k)printkq();
            else test(i+1);
        }
    }
}

int main()
{
    cin >> n >> k;
    chucai[0]=0;
    test(1);
    return 0;
}
