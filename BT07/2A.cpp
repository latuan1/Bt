#include <iostream>

using namespace std;

int f(int a[])
{
    return sizeof(a) / sizeof(int);
}

int main()
{
    cout << "Mang a duoc cap phat dong, mang b duoc khai bao" << endl;
    int *a = new int[100];
    int b[100];
    cout << "size cua a: " << sizeof(a) / sizeof(int) << endl;
    cout << "size cua a trong ham f: " << f(a) << endl;
    cout << "size cua b: " << sizeof(b) / sizeof(int) << endl;
    cout << "size cua b trong ham f: " << f(b) << endl;
    cout << "Do do, khi truyen tham so, mang duoc truyen la con tro chu khong phai mang";
}
