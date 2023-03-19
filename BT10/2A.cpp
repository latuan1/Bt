#include <iostream>

using namespace std;

struct Point
{
    double x,y;
};

void print1(Point a)
{
    cout << &a << endl;
}

void print2(Point& a)
{
    cout << &a << endl;
}

int main()
{
    Point a={1,2};
    print1(a);
    print2(a);
}
