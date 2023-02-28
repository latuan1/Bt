#include <iostream>

using namespace std;

int ucln(int a,int b)
{
    while (a>0&&b>0)
    {
        int tg=a;
        a=b;
        b=tg%b;
    }
    return a+b;
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << ucln(a,b);
}

