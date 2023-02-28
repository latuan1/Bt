#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int so[n],ts[n];
    for (int i=0;i<n;i++)
    {
        cin >> so[i];
        ts[i]=0;
    }
    for (int i=0;i<n;i++)ts[so[i]-1]++;
    for (int i=0;i<n;i++)
    {
        if (ts[i]>=2)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}
