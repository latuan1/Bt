#include <iostream>

using namespace std;

int main()
{
    string fibonacciword[11];
    fibonacciword[0]="a";
    fibonacciword[1]="b";
    for (int i=2;i<11;i++)fibonacciword[i]=fibonacciword[i-1]+fibonacciword[i-2];
    for (int i=0;i<11;i++)cout << fibonacciword[i] << endl;
    return 0;
}
