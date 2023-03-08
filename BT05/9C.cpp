#include <iostream>
#include <cstdlib>

using namespace std;

int randNumber(int n)
{
    return rand()%n;
}

int main()
{
    int n;
    cin >> n;
    cout << randNumber(n);
    return 0;
}
