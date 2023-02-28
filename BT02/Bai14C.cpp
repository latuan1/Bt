#include <iostream>

using namespace std;

int main()
{
    int n;
    double x;
    cin >> n >> x;
    double Max=x,Min=x;
    for (int i=1;i<n;i++)
    {
        cin >> x;
        if (x>Max)Max=x;
        if (x<Min)Min=x;
    }
    cout << Max << " " << Min;
}
