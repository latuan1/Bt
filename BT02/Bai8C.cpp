#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int delta=b*b-4*a*c;
    if (delta>0)cout << setprecision(2) << fixed << -1.0*b/(2*a)-sqrt(delta)/(2*a) << endl << -1.0*b/(2*a)+sqrt(delta)/(2*a);
    else
    {
        if (delta==0)cout << setprecision(2) << fixed << -1.0*b/(2*a);
        else
        {
            cout << setprecision(2) << fixed << -1.0*b/(2*a) << -sqrt(-delta)/(2*a) << "i" << endl;
            cout << setprecision(2) << fixed << -1.0*b/(2*a) << "+" << sqrt(-delta)/(2*a) << "i" << endl;
        }
    }
    return 0;
}
