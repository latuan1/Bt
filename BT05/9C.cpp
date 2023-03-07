#include <iostream>
#include <cstdlib>

using namespace std;

int randNumber(int n)
{
    return (int)(rand()*n/(1.0+RAND_MAX));
}

int main()
{
    int n;
    cin >> n;
    cout << randNumber(n);
    return 0;
}
