#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    double s=sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
    cout << setprecision(2) << fixed << s;
}
