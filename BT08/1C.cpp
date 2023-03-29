#include <iostream>

using namespace std;

void reverse_char(char a[])
{
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    for (int i=0;i<=(l-1)/2;i++)
    {
        char tg=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=tg;
    }
}

void delete_char(char a[], char c)
{
    int l=0,index=0;
    while (a[l]!='\0')
    {
        l++;
    }
    for (int i=0;i<l;i++)
    {
        if (a[i]==c)
        {
            index++;
            for (int j=i;j<l-index;j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    a[l-index]='\0';
}

void pad_right(char a[], int n)
{
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    if (n>l)
    {
        for (int i=l;i<n;i++)a[i]=(char)32;
        a[n]='\0';
    }
}

void pad_left(char a[], int n)
{
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    if (n>l)
    {
        for (int i=n-1;i>=n-l;i--)a[i]=a[i-n+l];
        for (int i=0;i<n-l;i++)a[i]=(char)32;
        a[n]='\0';
    }
}

void truncate(char a[], int n)
{
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    if (l>n)a[n]='\0';
}

bool is_palindrome(char a[])
{
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    for (int i=0;i<=(l-1)/2;i++)
    {
        if (a[i]!=a[l-1-i])return false;
    }
    return true;
}

void trim_left(char a[])
{
    int l=0,i=0;
    while (a[l]!='\0')
    {
        l++;
    }
    while (a[i]==(char)32)
    {
        i++;
    }
    for (int j=0;j<l-i;j++)a[j]=a[j+i];
    a[l-i]='\0';
}

void trim_right(char a[])
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
    a[l]='\0';
}

int main()
{
    char a[]="abcdefghik";
    char c='i';
    reverse_char(a);
    cout << a << endl;
    delete_char(a,c);
    cout << a << endl;
    truncate(a,5);
    cout << a << endl;
    pad_right(a,10);
    cout << a << c << endl;
    pad_left(a,15);
    cout << a << endl;
    cout << is_palindrome(a) << endl;
    trim_left(a);
    cout << a <<  endl;
    trim_right(a);
    cout << a << c << endl;
    return 0;
}
