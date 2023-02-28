#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double Min,Max,step_size;
    cin >> Min >> Max >> step_size;
    for (double i=Min;i<=Max;i=i+step_size)
    {
        cout << setprecision(2) << fixed << i << " " << 5.0*(i-32)/9 << " " << 5.0*(i-32)/9+273.15 << endl;
    }
}
