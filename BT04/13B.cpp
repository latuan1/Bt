// Sherlock and Array

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int test[n];

    for (int i = 0; i < n; i++)
    {
        cin >> test[i];
        int day[test[i]];
        for (int j = 0; j < test[i]; j++)
            cin >> day[j];
        int trai = 0, phai = 0;

        for (int j = 1; j < test[i]; j++)
            phai = phai + day[j];
        for (int j = 0; j < test[i] - 1; j++)
        {
            if (trai < phai)
            {
                trai = trai + day[j];
                phai = phai - day[j + 1];
            }
        }

        if (trai > phai)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}