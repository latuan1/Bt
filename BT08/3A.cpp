#include <iostream>

using namespace std;

void swap_pointers(char** x, char** y)
{
   char *tmp;
   tmp = *x;
   *x = *y;
   *y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";
   char **s1 = new char*;
   char **s2 = new char*;
   *s1=a;
   *s2=b;
   swap_pointers(s1,s2);
   cout << "s1 is " << *s1 << endl;
   cout << "s2 is " << *s2 << endl;
   return 0;
   // Code không ra kết quả như ý do muốn swap hai con trỏ ta phải dùng tham số là con trỏ tới con trỏ
   // Hàm swap ở đề là đang swap 2 kí tự char chứ không phải 2 xâu kí tự
}
