#include <iostream>
#include <cmath>

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
    if (b==0)return 0;
    if (a*b>0)
    {
        if (b/ucln(a,b)==1)cout << a/ucln(a,b);
        else cout << a/ucln(a,b) << "/" << b/ucln(a,b);
    }
    else if (a*b<0)
        {
            cout << "-";
            if (abs(b/ucln(a,b))==1)cout << abs(a/ucln(a,b));
            else cout << abs(a/ucln(a,b)) << "/" << abs(b/ucln(a,b));
        }
        else cout << "0";
}

