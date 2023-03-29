#include <iostream>

using namespace std;

char* concat(const char* a, const char *b)
{
    int len1=0,len2=0;
    while (a[len1]!='\0')
    {
        len1++;
    }
    while (b[len2]!='\0')
    {
        len2++;
    }
    char* concat=new char[len1+len2];
    for (int i=0;i<len1;i++)*(concat+i)=*(a+i);
    for (int i=0;i<len2;i++)*(concat+len1+i)=*(b+i);
    *(concat+len1+len2)='\0';
    return concat;
}

int main()
{
    cout << concat("Hello","World");
    return 0;
}
