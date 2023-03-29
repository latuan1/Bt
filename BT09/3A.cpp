#include <iostream>

using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a+3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
    // cerr thứ 3 không chạy như mong muốn vì xóa c khiến a không còn liền mạch nữa do 1 ô nhớ trong chuỗi đã được giải phóng
}
