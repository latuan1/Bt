#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    for (double i=0;i<=300;i=i+20)
    {
        cout << setprecision(2) << fixed << i << " " << 5.0*(i-32)/9 << " " << 5.0*(i-32)/9+273.15 << endl;
    }
}
