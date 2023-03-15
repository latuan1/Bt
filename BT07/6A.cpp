#include <iostream>

using namespace std;

int n,chuso[100];

void printResult(int n)
{
    for (int i=1;i<=n;i++)cout << chuso[i] << " " ;
    cout << endl;
}

void test(int i)
{
    for (int j=1;j<=n;j++)
    {
        if (j>chuso[i-1])
        {
            chuso[i]=j;
            if (i==n)printResult(i);
            else
            {
                printResult(i);
                test(i+1);
            }
        }
    }
}

int main(int argc,const char* argv[])
{
    n=stoi(argv[1]);
    chuso[0]=0;
    test(1);
    return 0;
}
