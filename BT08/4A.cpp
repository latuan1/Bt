#include <iostream>

using namespace std;

int main()
{
   char **s=new char*[1];
   char foo[] = "Hello World";
   *s = foo;
   printf("s is %x\n",s);
   s[0] = foo;
   printf("s[0] is %s\n",s[0]);
   delete []s;
   return(0);
}

// Code đề cho có 2 lỗi
// Lỗi thứ nhất là chưa câp phát động con trỏ cấp 2 **s
// Lỗi thứ hai là in ra địa chỉ s ta không được dùng %s mà phải dùng %x
// Code sau khi sửa như trên
