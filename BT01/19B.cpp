#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    bool b;
    cin >> x >> y >> z;
    if ((x-y)*(y-z)>0)b=true;
    else b=false;
    cout << b;
}
