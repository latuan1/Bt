#include <iostream>

using namespace std;

struct type
{
    int arr[10];
};

int main()
{
    type a;
    type b=a;
    cout << a.arr << " " << b.arr << endl;
    cout << "Ta thay dia chi mang b khac mang a du b duoc gan bang a";
}
