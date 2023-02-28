#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n>=0&&n%5==0)cout << n/5 << " ";
        else if (n!=-1)cout << "-1 ";
             else
             {
                 cout << "Bye";
                 break;
             }
    }
}
