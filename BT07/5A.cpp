#include <iostream>

using namespace std;

char *weird_string()
{
    char c[] = "123345";
    return c;
}

int main()
{
    char *c = weird_string();
    cout << c;
    /*
    Chuong trinh tra ve warning:

    main.cpp: In function 'char* weird_string()':
    main.cpp:6:10: warning: address of local variable 'c' returned [-Wreturn-local-addr]
        char c[] = "123345";

    va khong co output
    */
}
