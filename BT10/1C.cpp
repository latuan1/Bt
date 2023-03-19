#include <iostream>

using namespace std;

struct String
{
    int n;
    char* ptr;

    String(const char* c)
    {
        int crr=0;
        while (*(c+crr)!='\0')
        {
            crr++;
        }
        n=crr;
        ptr = new char [n];
        for (int i=0;i<n;i++)*(ptr+i)=*(c+i);
    }

    ~String()
    {
        delete [] ptr;
    }

    void print()
    {
        cout << ptr;
    }

    void append(const char* add)
    {
        int crr=0;
        while (*(add+crr)!='\0')
        {
            crr++;
        }
        n=n+crr;
        char* temp=new char[n];
        for (int i=0;i<n-crr;i++)*(temp+i)=*(ptr+i);
        for (int i=n-crr;i<n;i++)*(temp+i)=*(add+i-n+crr);
        for (int i=0;i<n;i++)*(ptr+i)=*(temp+i);
        *(ptr+n)='\0';
        delete [] temp;
    }
};

int main()
{
    String test("Hello");
    test.print();
    cout << endl;
    test.append("World");
    test.print();
    test.~String();
    return 0;
}
