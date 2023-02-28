#include <bits/stdc++.h>

using namespace std;

struct sinhVien
{
    string hoTen;
    double t, l, h = 0;
    double tb = 0;
    sinhVien()
    {
    }
};

sinhVien sv[1000];

void in(sinhVien sv[], int n)
{
    cout << setw(10) << "Ho ten" << setw(20) << "Toan" << setw(10) << "Li" << setw(10) << "Hoa" << setw(10) << "Trung binh" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << sv[i].hoTen << setw(20) << sv[i].t << setw(10) << sv[i].l << setw(10) << sv[i].h << setw(10) << sv[i].tb << endl;
    }
    cout << endl;
}

void sapXepToan(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sv[i].t < sv[j].t)
                swap(sv[i], sv[j]);
        }
    }
    in(sv, n);
}

void sapXepLi(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sv[i].l < sv[j].l)
                swap(sv[i], sv[j]);
        }
    }
    in(sv, n);
}

void sapXepHoa(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sv[i].h < sv[j].h)
                swap(sv[i], sv[j]);
        }
    }
    in(sv, n);
}

void sapXepTb(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sv[i].tb < sv[j].tb)
                swap(sv[i], sv[j]);
        }
    }
    in(sv, n);
}

int main()
{
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double t, l, h;
        cout << "Nhap ho ten sinh vien: ";
        cin >> sv[i].hoTen;

        cout << "Nhap diem toan cua sinh vien thu " << i << ": ";
        cin >> t;
        while (t < 0 || t > 10)
        {
            cout << "Ban vua nhap so diem khong hop li, moi ban nhap lai: ";
            cin >> t;
        }

        cout << "Nhap diem li cua sinh vien thu " << i << ": ";
        cin >> l;
        while (l < 0 || l > 10)
        {
            cout << "Ban vua nhap so diem khong hop li, moi ban nhap lai: ";
            cin >> l;
        }

        cout << "Nhap diem hoa cua sinh vien thu " << i << ": ";
        cin >> h;
        while (h < 0 || h > 10)
        {
            cout << "Ban vua nhap so diem khong hop li, moi ban nhap lai: ";
            cin >> h;
        }

        sv[i].t = t;
        sv[i].l = l;
        sv[i].h = h;
        sv[i].tb = (t + l + h) / 3;
    }

    cout << "Danh sach sinh vien sap xep theo diem Toan:" << endl;
    sapXepToan(n);

    cout << "Danh sach sinh vien sap xep theo diem Li:" << endl;
    sapXepLi(n);

    cout << "Danh sach sinh vien sap xep theo diem Hoa:" << endl;
    sapXepHoa(n);

    cout << "Danh sach sinh vien sap xep theo diem trung binh:" << endl;
    sapXepTb(n);
}