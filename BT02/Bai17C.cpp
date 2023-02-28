#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    cout << setprecision(2) << fixed << 1.0*(a+b+c+d+e)/5;
    return 0;
}
