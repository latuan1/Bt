#include <iostream>

using namespace std;

char* reverse_char(const char a[])
{
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    char* reverse_char=new char[l];
    for (int i=0;i<l;i++)reverse_char[i]=a[l-1-i];
    reverse_char[l]='\0';
    return reverse_char;
}

char* delete_char(const char a[], const char c)
{
    int l=0,index=0;
    while (a[l]!='\0')
    {
        l++;
    }
    char* delete_char=new char[l];
    for (int i=0;i<l;i++)
    {
        if (a[i]!=c)
        {
            delete_char[index]=a[i];
            index++;
        }
    }
    delete_char[index]='\0';
    return delete_char;
}

char* pad_right(const char a[], const int n)
{
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    char* pad_right=new char[n];
    if (n>l)
    {
        for (int i=0;i<l;i++)pad_right[i]=a[i];
        for (int i=l;i<n;i++)pad_right[i]=(char)32;
        pad_right[n]='\0';
    }
    else
    {
        for (int i=0;i<l;i++)pad_right[i]=a[i];
        pad_right[l]='\0';
    }
    return pad_right;
}

char* pad_left(const char a[], const int n)
{
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    char* pad_left=new char[n];
    if (n>l)
    {
        for (int i=0;i<n-l;i++)pad_left[i]=(char)32;
        for (int i=n-l;i<n;i++)pad_left[i]=a[i-n+l];
        pad_left[n]='\0';
    }
    else
    {
        for (int i=0;i<l;i++)pad_left[i]=a[i];
        pad_left[l]='\0';
    }
    return pad_left;
}

char* truncate(const char a[], const int n)
{
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    char* truncate=new char[n];
    if (n>=l)
    {
        for (int i=0;i<l;i++)truncate[i]=a[i];
        truncate[l]='\0';
    }
    else
    {
        for (int i=0;i<n;i++)truncate[i]=a[i];
        truncate[n]='\0';
    }
    return truncate;
}

char* trim_left(const char a[])
{
    int l=0,start=0;
    while (a[l]!='\0')
    {
        l++;
    }
    while (a[start]==(char)32)
    {
        start++;
    }
    char* trim_left=new char[l-start];
    for (int i=0;i<l-start;i++)trim_left[i]=a[i+start];
    trim_left[l-start]='\0';
    return trim_left;
}

char* trim_right(const char a[])
{
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    while (a[l-1]==(char)32)
    {
        l--;
    }
    char* trim_right=new char[l];
    for (int i=0;i<l;i++)trim_right[i]=a[i];
    trim_right[l]='\0';
    return trim_right;
}

int main()
{
    char a[]="  abcdef  ";
    char c='e';
    cout << reverse_char(a) << endl;
    cout << delete_char(a,c) << endl;
    cout << truncate(a,5) << endl;
    cout << pad_right(a,12) << c << endl;
    cout << pad_left(a,15) << endl;
    cout << trim_left(a) <<  endl;
    cout << trim_right(a) << c << endl;
    return 0;
}
