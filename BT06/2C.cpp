#include <iostream>

using namespace std;

int n,k,chucai[150],tu[30];

void printkq()
{
    for (int i=0;i<k;i++)cout << (char)tu[i];
    cout << endl;
}

void test(int i)
{
    for (int j=97;j<97+n;j++)
    {
        if (chucai[j]==1)
        {
            tu[i]=j;
            chucai[j]=0;
            if (i==k-1)printkq();
            else test(i+1);
            chucai[j]=1;
        }
    }
}

int main()
{
    cin >> n >> k;
    for (int i=0;i<150;i++)chucai[i]=1;
    test(0);
    return 0;
}
