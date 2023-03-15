#include <iostream>

using namespace std;

int count_even(int *a, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (*(a + i) % 2 == 0)
            res++;
    }
    return res;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int n = sizeof(a) / sizeof(int);
    cout << "So phan tu chan trong 5 phan tu dau mang: " << count_even(a, 5) << endl;
    cout << "So phan tu chan trong 5 phan tu cuoi mang: " << count_even(a + n - 5, 5);
}
