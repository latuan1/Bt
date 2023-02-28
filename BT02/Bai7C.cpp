#include <iostream>

using namespace std;

int main()
{
    double a1,b1,c1,a2,b2,c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1*b2!=a2*b1)cout << "x = " << (b2*c1-b1*c2)/(a1*b2-a2*b1) << ", y = " << (a1*c2-a2*c1)/(a1*b2-a2*b1);
    else
    {
        if (a1*c2==a2*c1&&c1*b2==c2*b1)cout << "Vo so nghiem";
        else cout << "Vo nghiem";
    }
}
