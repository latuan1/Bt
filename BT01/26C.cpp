#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    int tong=x,lon=x,nho=x;
    for (int i=1;i<n;i++)
    {
        cin >> x;
        tong=tong+x;
        if (x>lon)lon=x;
        else if (x<nho)nho=x;
    }
    cout << "Mean: " << 1.0*tong/n << endl;
    cout << "Max: " << lon << endl;
    cout << "Min: " << nho << endl;
}
