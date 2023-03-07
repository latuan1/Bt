#include <iostream>
#include <cmath>

using namespace std;

int rnd(double n)
{
    int dem=0;
    double tg=abs(n);
    while (tg>=1)
    {
        tg--;
        dem++;
    }
    if (tg>=0.5)return (dem+1)*n/abs(n);
    else return dem*n/abs(n);
}

int main()
{
    double n;
    cin >> n;
    cout << rnd(n);
    return 0;
}
