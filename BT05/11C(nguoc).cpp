#include <iostream>

using namespace std;

int binToDec(string bin)
{
    int n=bin.length(),dec=0,hs=1;
    for (int i=n-1;i>=0;i--)
    {
        dec=dec+(int)(bin[i]-48)*hs;
        hs=2*hs;
    }
    return dec;
}

int main()
{
    string bin;
    cin >> bin;
    cout << binToDec(bin);
    return 0;
}
