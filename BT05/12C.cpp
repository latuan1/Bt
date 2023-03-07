#include <iostream>

using namespace std;

int kiemTra(int k, int n)
{
    if (k>=0&&k<=n&&n<=20&&n>=1)return 1;
    else return 0;
}

void nhapKN(int k[], int n[], int &soPhanTu)
{
    cin >> k[soPhanTu] >> n[soPhanTu];
    while (k[soPhanTu]!=-1&&n[soPhanTu]!=-1)
    {
        soPhanTu=soPhanTu+1;
        cin >> k[soPhanTu] >> n[soPhanTu];
    }
}

int toHop(int k, int n)
{
    int p=1,q=1;
    for (int i=k+1;i<=n;i++)p=p*i;
    for (int i=2;i<=n-k;i++)q=q*i;
    return p/q;
}

int main()
{
    int k[1000],n[1000],soPhanTu=0;
    nhapKN(k,n,soPhanTu);
    for (int i=0;i<soPhanTu;i++)
    {
        if (kiemTra(k[i],n[i]))cout << toHop(k[i],n[i]) << endl;
        else break;
    }
    return 0;
}
