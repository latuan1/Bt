#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double diem[n],hs[n],s=0,tong=0;
    for (int i=0;i<n;i++)cin >> diem[i] >> hs[i];
    for (int i=0;i<n;i++)
    {
        if (diem[i]<0||diem[i]>10)
        {
            cout << "Sai diem so";
            return 0;
        }
        if (hs[i]!=1&&hs[i]!=1.5&&hs[i]!=2&&hs[i]!=2.5&&hs[i]!=3)
        {
            cout << "Sai he so";
            return 0;
        }
    }
    cout << "Tong so mon hoc can tinh DTB: " << n << endl;
    for (int i=0;i<n;i++)
    {
        cout << "Diem mon hoc " << i << ": " << setprecision(1) << fixed << diem[i] << endl;
        cout << "He so mon hoc " << i << ": " << setprecision(1) << fixed << hs[i] << endl;
        s=s+hs[i];
        tong=tong+diem[i]*hs[i];
    }
    cout << "Tong so he so: " << setprecision(1) << fixed << s << endl;
    cout << "Diem trung binh cua " << n << " mon hoc: " << setprecision(1) << fixed << tong/s;
    return 0;
}
