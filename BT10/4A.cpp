#include <iostream>

using namespace std;

struct Point
{
    double x,y;
};

void print(const Point& a)
{
    cout << &a << endl;
    cout << &a.x << endl;
    cout << &a.y << endl;
}

int main()
{
    Point a={0,1};
    print(a);
}
