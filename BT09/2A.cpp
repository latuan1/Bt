#include <iostream>

using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    *p2 = 100;
    // truy cập vào địa chỉ đã bị xóa
    cout << *p2;
    delete p2;
    // xóa địa chỉ 2 lần
    return 0;
}
