#include <iostream>
#include <cmath>

using namespace std;

bool Isscp (int n)
{
    if ((int)sqrt(n)==sqrt(n))return true;
    else return false;
}

int main()
{
    int n;
    cin >> n;
    if (Isscp(n))cout << "yes";
    else cout << "no";
}
