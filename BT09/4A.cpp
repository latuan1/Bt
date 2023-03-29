#include <iostream>

using namespace std;

int main()
{
    int *a = new int;
    int *t = a;
    cout << t << endl;
    //con trỏ t dang trỏ tới địa chỉ A
    delete a;
    // giải phóng vùng nhớ A
    cout << t << endl;
    //sau khi giải phóng vùng nhớ A, con trỏ t vẫn trỏ vào vùng nhớ A
}

