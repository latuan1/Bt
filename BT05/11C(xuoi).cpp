#include <iostream>

using namespace std;

string decToBin(int n)
{
    string bin;
    while (n>0)
    {
        bin=(char)(n%2+48)+bin;
        n=n/2;
    }
    return bin;
}

int main()
{
    int n;
    cin >> n;
    cout << decToBin(n);
    return 0;
}
