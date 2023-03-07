#include <iostream>

using namespace std;

void printRec(int m, int n)
{
    for (int i=0;i<m;i++)cout << " ";
    for (int i=0;i<n;i++)cout << "*";
}

int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        printRec(n-1-i,2*i+1);
        cout << endl;
    }
    return 0;
}
