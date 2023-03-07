#include <iostream>
#include <cmath>

using namespace std;

int rnd(double n)
{
    if (n<(ceil(n)+floor(n))/2)return floor(n);
    else return ceil(n);
}

int main()
{
    double n;
    cin >> n;
    cout << round(n);
    return 0;
}
