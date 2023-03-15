#include <iostream>

using namespace std;

void binarySearch(int a[], int n, int t)
{
    int l = -1, r = n;
    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        if (*(a + mid) < t)
            l = mid;
        else
            r = mid;
    }
    if (*(a + r) == t)
    {
        cout << "Phan tu dau tien bang " << t << " trong mang la a[" << r << "]";
    }
    else
        cout << "Khong tim thay phan tu " << t << " trong mang";
}

int main()
{
    int n;
    cout << "Nhap so phan tu trong day: ";
    cin >> n;
    cout << "Nhap lan luot " << n << " so theo thu tu tang dan: " << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Nhap so can tim kiem: ";
    int t;
    cin >> t;
    binarySearch(a, n, t);
}
